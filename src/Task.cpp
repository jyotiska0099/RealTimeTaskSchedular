#include "Task.h"
#include <thread> // For std::this_thread::sleep_for
#include <chrono> // For std::chrono::seconds

Task::Task() : name(""), priority(0) {} // Initialize with default values

Task::Task(const std::string& name, int priority) : name(name), priority(priority) {}

std::string Task::getName() const {
    return name;
}

int Task::getPriority() const {
    return priority;
}

void Task::setPriority(int priority) {
    this->priority = priority;
}

void Task::executeTask() {
    std::cout << "Executing task: " << name << std::endl;
    // Simulate task execution time
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
