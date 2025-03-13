#include "AgingPolicy.h"

void AgingPolicy::updatePriority(Task& task) {
    // Simple aging policy: decrease priority by 1 every update
    task.setPriority(task.getPriority() - 1);
    if (task.getPriority() < 0) task.setPriority(0); // Ensure priority doesn't go below 0
}
