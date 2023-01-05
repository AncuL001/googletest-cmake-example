#include <gtest/gtest.h>
#include "job.hpp"
#include "select-activities.hpp"

TEST(SelectActivities, JobAssignment) {
  Job job = Job{.name = "aaaa", .start = 5, .finish = 15};

  EXPECT_EQ(job.start, 5);
  EXPECT_EQ(job.finish, 15);
  EXPECT_EQ(job.name, "aaaa");
}

TEST(SelectActivities, SelectActivities) {
  std::vector<Job> jobs;

  jobs.push_back(Job {.name = "1", .start = 2, .finish = 14} );
  jobs.push_back(Job {.name = "2", .start = 6, .finish = 6} );
  jobs.push_back(Job {.name = "3", .start = 4, .finish = 5} );
  jobs.push_back(Job {.name = "4", .start = 9, .finish = 12} );
  jobs.push_back(Job {.name = "5", .start = 5, .finish = 7} );
  jobs.push_back(Job {.name = "6", .start = 1, .finish = 3} );
  jobs.push_back(Job {.name = "7", .start = 7, .finish = 9} );
  jobs.push_back(Job {.name = "8", .start = 13, .finish = 15} );
  jobs.push_back(Job {.name = "9", .start = 10, .finish = 11} );
  jobs.push_back(Job {.name = "10", .start = 8, .finish = 13} );
  jobs.push_back(Job {.name = "11", .start = 3, .finish = 8} );

  std::vector<Job> res = selectActivities(jobs);

  std::vector<std::string> correctOrders = {"6", "3", "2", "7", "9", "8"};

  for (int i = 0; i < res.size(); i++) {
    EXPECT_EQ(res[i].name, correctOrders[i]);
  }
}