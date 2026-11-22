#include <iostream>
using namespace std;
//Week 10 task one

//base class
class Employee{
  //Encapsulation
  private:
  string EmployeeName;
  int EmployeeID;
  float BasicSalary;

  public:
  void setEmployeeDetails(){

    //Prompting the user to enter the Employee Details
    cout<<"Enter The Employee Name: "<<endl;
    cin>>EmployeeName;

    cout<<"Enter the Employee ID: "<<endl;
    cin>>EmployeeID;


    cout<<"Enter The Basic Salary: "<<endl;
    cin>>BasicSalary;

  }
  //Function to calculate the Net salary
  double calculateSalary(){
    return BasicSalary + (0.10 * BasicSalary);
  }

  //Fumction to display the employee details
  void DisplayEmployeeDetails(){
    cout<<"\n=============================\n"<<endl;
    cout<<"_____EMPLOYEE DETAILS______\n"<<endl;
    cout<<"Employee Name: " <<EmployeeName <<endl;
    cout<<"Employee ID: " <<EmployeeID <<endl;
    cout<<"Basic Salary: Ksh " <<BasicSalary <<endl;
    cout<<"\n\tNet Salary: Ksh "<<calculateSalary()<<endl;
    cout<<"============================="<<endl;
  }

};

//The main function
int main(){

  //Creating an object (Emp1) of the Employee Class
  Employee Emp1;

  //Seting of Employee Details
  Emp1.setEmployeeDetails();

  //Displaying the Employee Details
  Emp1.DisplayEmployeeDetails();
  return 0;
}