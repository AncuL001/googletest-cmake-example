file(GLOB JOB_SRCS *.cpp)
file(GLOB JOB_HDRS *.cpp)

add_library(job STATIC
    ${JOB_SRCS}
    ${JOB_HDRS}
)

target_include_directories(job PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}
)