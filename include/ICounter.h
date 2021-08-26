//
// Created by tkit on 2021/8/26.
//

#ifndef CONCURRENCY_EXERCISE_ICOUNTER_H
#define CONCURRENCY_EXERCISE_ICOUNTER_H

#include <ostream>

class ICounter {
public:
  virtual void add_one() = 0;

  virtual void minus_one() = 0;

  virtual void reset() = 0;

  virtual void print() = 0;

  virtual int get_count() = 0;
};

#endif // CONCURRENCY_EXERCISE_ICOUNTER_H
