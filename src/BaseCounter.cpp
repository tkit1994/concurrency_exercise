//
// Created by tkit on 2021/8/26.
//

#include "BaseCounter.h"

#include <iostream>

void BaseCounter::add_one() {
    count_++;
}

void BaseCounter::minus_one() {
    count_--;
}

BaseCounter::BaseCounter(int count) : count_(count) {}

void BaseCounter::reset() {
    count_ = 0;
}

BaseCounter::BaseCounter() : count_(0) {

}

void BaseCounter::print() {
    std::cout << "Counter.count_: " << this->count_ << std::endl;
}

int BaseCounter::get_count() {
    return count_;
}
