//
// Created by tkit on 2021/8/26.
//

#ifndef CONCURRENCY_EXERCISE_MUTEXCOUNTER_H
#define CONCURRENCY_EXERCISE_MUTEXCOUNTER_H

#include "ICounter.h"
#include "BaseCounter.h"
#include <mutex>

class MutexCounter : public BaseCounter {
private:
    std::mutex m_;
public:
    void add_one() override;

    MutexCounter();

    MutexCounter(int count);

    void minus_one() override;
};


#endif //CONCURRENCY_EXERCISE_MUTEXCOUNTER_H
