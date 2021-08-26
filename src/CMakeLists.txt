SET(CounterSRCS BaseCounter.cpp MutexCounter.cpp AtomicCounter.cpp)
SET(RunnerSRCS Runner.cpp)
add_library(counter SHARED ${CounterSRCS})

add_library(runner SHARED ${RunnerSRCS})
target_link_libraries(counter PRIVATE Threads::Threads)

add_executable(concurrency_exercise main.cpp)
target_link_libraries(concurrency_exercise PRIVATE counter runner)


