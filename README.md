# Real-Time Task Scheduler

==========================
A C++ implementation of a real-time task scheduler using priority queues and multithreading. This project demonstrates how to manage tasks dynamically, ensuring efficient execution based on priority.
Features
- Priority Queues: Tasks are managed using a priority queue (std::priority_queue), ensuring tasks with higher priority are executed first.
- Multithreading: Tasks are executed concurrently using a separate thread (std::thread).
- Task Preemption: Not directly implemented, but can be achieved by interrupting tasks and resuming them later.
- Starvation Handling: Implemented through an aging mechanism that gradually increases the priority of waiting tasks.
- Aging Mechanism: A simple aging policy updates task priorities over time to prevent starvation.

### Project Structure
- include/: Header files for the project.
    - Task.h: Defines the Task class.
    - Scheduler.h: Defines the Scheduler class.
    - AgingPolicy.h: Defines the AgingPolicy class.
- src/: Source files for the project.
    - Task.cpp: Implements the Task class.
    - Scheduler.cpp: Implements the Scheduler class.
    - AgingPolicy.cpp: Implements the AgingPolicy class.
    - main.cpp: Demonstrates how to use the scheduler.

### Building and Running

- g++ -std=c++17 src/main.cpp src/Scheduler.cpp src/AgingPolicy.cpp src/Task.cpp -o RealTimeTaskScheduler -pthread
- ./RealTimeTaskScheduler

### Contributing
Contributions are welcome! If you have any ideas or improvements, please submit a pull request or open an issue.

### License
This project is licensed under the MIT License. See LICENSE for details.

### Acknowledgments
- This project uses C++11/C++17 features for multithreading and priority queues.
- The aging policy is a simple demonstration and can be enhanced based on specific requirements.
