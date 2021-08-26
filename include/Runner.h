//
// Created by tkit on 2021/8/26.
//

#ifndef CONCURRENCY_EXERCISE_RUNNER_H
#define CONCURRENCY_EXERCISE_RUNNER_H

#include "ICounter.h"
#include <memory>

class Runner {
private:
  int threads_;
  int steps_;
  std::shared_ptr<ICounter> counter_;

public:
  Runner(int threads, std::shared_ptr<ICounter> counter, int steps);

  ~Runner();

  void time_run();

  void run();
};

#endif // CONCURRENCY_EXERCISE_RUNNER_H
