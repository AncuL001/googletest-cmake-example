file(GLOB SRCS *.cpp)

ADD_EXECUTABLE(test-sanity-check ${SRCS})

target_link_libraries(
    test-sanity-check
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(test-sanity-check)
