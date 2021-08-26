//
// Created by tkit on 2021/8/26.
//

#ifndef CONCURRENCY_EXERCISE_BASECOUNTER_H
#define CONCURRENCY_EXERCISE_BASECOUNTER_H

#include <ostream>
#include "ICounter.h"

class BaseCounter : public ICounter {
protected:
    int count_;
public:
    BaseCounter(int count);

    BaseCounter();

public:
    void add_one() override;

    void minus_one() override;

    int get_count() override;

    void print() override;

    void reset() override;

};


#endif //CONCURRENCY_EXERCISE_BASECOUNTER_H
