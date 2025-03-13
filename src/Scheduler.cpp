#include "Scheduler.h"

void Scheduler::addTask(const Task& task) {
    std::lock_guard<std::mutex> lock(mtx);
    taskQueue.push(task);
    cv.notify_one();
}

void Scheduler::start() {
    running = true;
    workerThread = std::thread(&Scheduler::workerLoop, this);
}

void Scheduler::stop() {
    running = false;
    cv.notify_one();
    if (workerThread.joinable()) {
        workerThread.join();
    }
}

void Scheduler::workerLoop() {
    while (running) {
        Task task;
        {
            std::unique_lock<std::mutex> lock(mtx);
            cv.wait(lock, [this] { return !taskQueue.empty() || !running; });
            if (!running) break;
            task = taskQueue.top();
            taskQueue.pop();
        }
        // Execute task
        task.executeTask();
    }
}
