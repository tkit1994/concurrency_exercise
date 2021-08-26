add_executable(counter_test CounterTest.cpp)
target_link_libraries(counter_test PRIVATE gtest_main counter runner)
include(GoogleTest)
gtest_discover_tests(counter_test)
