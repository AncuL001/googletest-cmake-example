file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(test-select-activities ${SRCS})

target_link_libraries(
    test-select-activities
    GTest::gtest_main
    job
)

include(GoogleTest)
gtest_discover_tests(test-select-activities)
