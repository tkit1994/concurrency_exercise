//
// Created by tkit on 2021/8/26.
//

#include "MutexCounter.h"

void MutexCounter::add_one() {
  std::lock_guard<std::mutex> lck(m_);
  BaseCounter::add_one();
}

void MutexCounter::minus_one() {
  std::lock_guard<std::mutex> lck(m_);
  BaseCounter::minus_one();
}

MutexCounter::MutexCounter() : BaseCounter() {}

MutexCounter::MutexCounter(int count) : BaseCounter(count) {}
