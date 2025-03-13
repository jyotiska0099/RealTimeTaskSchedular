#ifndef AGINGPOLICY_H
#define AGINGPOLICY_H

#include "Task.h"

class AgingPolicy {
public:
    void updatePriority(Task& task);
};

#endif // AGINGPOLICY_H
