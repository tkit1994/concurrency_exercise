//
// Created by tkit on 2021/8/26.
//
#include "ICounter.h"
#include "BaseCounter.h"
#include "MutexCounter.h"
#include "AtomicCounter.h"
#include <gtest/gtest.h>
#include "Runner.h"

TEST(CounterTest, BaseCounter) {
    std::shared_ptr<ICounter> counter = std::make_shared<BaseCounter>();
    auto runner = new Runner(10, counter, 1000000);
    runner->run();
    EXPECT_NE(counter->get_count(), 0);
}

TEST(CounterTest, MutexCounter) {

    std::shared_ptr<ICounter> counter = std::make_shared<MutexCounter>();
    auto runner = new Runner(10, counter, 1000000);
    runner->run();
    EXPECT_EQ(counter->get_count(), 0);
}

TEST(CounterTest, AtomicCounter) {

    std::shared_ptr<ICounter> counter = std::make_shared<AtomicCounter>();
    auto runner = new Runner(10, counter, 1000000);
    runner->run();
    EXPECT_EQ(counter->get_count(), 0);
}
