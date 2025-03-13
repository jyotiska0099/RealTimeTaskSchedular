#include "Scheduler.h"
#include "AgingPolicy.h"

int main() {
    Scheduler scheduler;
    scheduler.start();

    // Add tasks with different priorities
    scheduler.addTask(Task("High Priority", 10));
    scheduler.addTask(Task("Medium Priority", 5));
    scheduler.addTask(Task("Low Priority", 1));

    // Simulate aging
    AgingPolicy agingPolicy;
    // Example: Update priority every 5 seconds
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(5));
        // Implement logic to update task priorities using agingPolicy
    }

    scheduler.stop();
    return 0;
}
