#include <iostream>
using namespace std;
//Week 10 task one

//base class
class Employee{
  private:
  string EmployeeName;
  int EmployeeID;
  float BasicSalary;

  public:
  void setEmployeeDetails(string Name, int ID, float Salary, float Sal){
    EmployeeName = Name;
    EmployeeID = ID;
    BasicSalary = Salary;

  }
  void calculateSalary(){
    float NetSalary;
    NetSalary = BasicSalary + (0.10 * BasicSalary);
  }
  void DisplayEmployeeDetails(){
    cout<<"\n============================="<<endl;
    cout<<"Employee Name: " <<EmployeeName <<endl;
    cout<<"Employee ID: " <<EmployeeID <<endl;
    cout<<"Basic Salary: " <<BasicSalary <<endl;
    cout<<"============================="<<endl;
  }

};


int main(){

  return 0;
}