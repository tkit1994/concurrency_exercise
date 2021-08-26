//
// Created by tkit on 2021/8/26.
//

#ifndef CONCURRENCY_EXERCISE_ATOMICCOUNTER_H
#define CONCURRENCY_EXERCISE_ATOMICCOUNTER_H

#include "ICounter.h"
#include <atomic>

class AtomicCounter : public ICounter {
private:
  std::atomic_int count_;

public:
  AtomicCounter();

  AtomicCounter(int count);

  void add_one() override;

  void minus_one() override;

  void reset() override;

  int get_count() override;

  void print() override;
};

#endif // CONCURRENCY_EXERCISE_ATOMICCOUNTER_H
