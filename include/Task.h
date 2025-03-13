#ifndef TASK_H
#define TASK_H

#include <iostream>
#include <string>

class Task {
public:
    Task(); // Default constructor
    Task(const std::string& name, int priority);
    std::string getName() const;
    int getPriority() const;
    void setPriority(int priority);
    void executeTask(); // Example method to simulate task execution

private:
    std::string name;
    int priority;
};

#endif // TASK_H
