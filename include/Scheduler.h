#ifndef SCHEDULER_H
#define SCHEDULER_H

#include <queue>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <functional>
#include "Task.h"

struct CompareTasks {
    bool operator()(const Task& a, const Task& b) const {
        return a.getPriority() < b.getPriority();
    }
};

class Scheduler {
public:
    void addTask(const Task& task);
    void start();
    void stop();

private:
    std::priority_queue<Task, std::vector<Task>, CompareTasks> taskQueue;
    std::mutex mtx;
    std::condition_variable cv;
    bool running = false;
    std::thread workerThread;

    void workerLoop();
};

#endif // SCHEDULER_H
