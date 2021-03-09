#include <iostream>

using namespace std;

class Job {
 public:
  Job(){}
  Job(int salary):m_salary(salary){}
  ~Job(){}

  bool operator==(const Job& job){
    return job.m_salary == m_salary;
  }

 private:
  int m_salary;
};

int main(){

  Job job1(100);
  Job job2(200);

  if(job1 == job2)
    cout << "job1 == job2" <<endl;
  else
    cout << "job1 != job2" << endl;
  return 0;
}
