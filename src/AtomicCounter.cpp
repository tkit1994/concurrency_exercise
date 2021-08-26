//
// Created by tkit on 2021/8/26.
//

#include "AtomicCounter.h"
#include <iostream>

AtomicCounter::AtomicCounter(int count) : count_(count) {}

AtomicCounter::AtomicCounter() : AtomicCounter(0) {

}

void AtomicCounter::add_one() {
    count_++;
}

void AtomicCounter::minus_one() {
    count_--;
}

void AtomicCounter::reset() {
    count_ = 0;
}

void AtomicCounter::print() {
    std::cout << "Counter:count_: " << count_ << std::endl;
}

int AtomicCounter::get_count() {
    return count_;
}
