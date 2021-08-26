//
// Created by tkit on 2021/8/26.
//

#include "Runner.h"
#include <chrono>
#include <iostream>
#include <thread>
#include <vector>

Runner::Runner(int threads, std::shared_ptr<ICounter> counter, int steps)
    : threads_(threads), counter_(counter), steps_(steps) {}

Runner::~Runner() {}

void Runner::run() {
  std::vector<std::thread> threads;
  for (int i = 0; i < threads_; i++) {
    threads.emplace_back([this]() {
      for (int j = 0; j < steps_; j++) {

        counter_->add_one();
      }
    });
  }

  for (int i = 0; i < threads_; i++) {
    threads.emplace_back([this]() {
      for (int j = 0; j < steps_; j++) {

        counter_->minus_one();
      }
    });
  }
  for (auto &thread : threads) {
    thread.join();
  }
  counter_->print();
}

void Runner::time_run() {
  auto start = std::chrono::system_clock::now();
  run();
  auto end = std::chrono::system_clock::now();
  auto dur = std::chrono::duration_cast<std::chrono::milliseconds>(end - start);
  std::cout << dur.count() << " ms" << std::endl;
}
