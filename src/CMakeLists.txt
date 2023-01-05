add_executable(activity-selection-problem main.cpp)

add_subdirectory(job)

target_link_libraries(activity-selection-problem
    job
)