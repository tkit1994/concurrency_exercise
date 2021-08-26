#include <iostream>
#include "ICounter.h"
#include "BaseCounter.h"
#include "MutexCounter.h"
#include "AtomicCounter.h"
#include "Runner.h"

int main(int argn, char **argv) {
//    std::shared_ptr<ICounter> counter = std::make_shared<BaseCounter>();
    std::shared_ptr<ICounter> counter = std::make_shared<MutexCounter>();
//    std::shared_ptr<ICounter> counter = std::make_shared<AtomicCounter>();
    auto runner = new Runner(10, counter, 1000000);
    runner->time_run();
//    runner->run();
    return 0;
}
