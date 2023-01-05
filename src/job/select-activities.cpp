#include "select-activities.hpp"

std::vector<Job> selectActivities(std::vector<Job> jobs) {
  std::sort(
    jobs.begin(), 
    jobs.end(), 
    [](Job job1, Job job2){
        return job1.finish < job2.finish;
      }
  );

  std::vector<Job> selectedJobs;
  selectedJobs.push_back(jobs.front());

  for (Job job: jobs) {
    if (job.start >= selectedJobs.back().finish) {
      selectedJobs.push_back(job);
    }
  }

  return selectedJobs;
}