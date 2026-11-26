#include <iostream>
using namespace std;
//Week 11 task one

//*Base class(abstract)
class MedicalStaff{
  protected:
  string StaffName;
  int StaffID;

  public:
  //Setter functions for the attributes
  void setStaffName(string name){
    StaffName = name;
  }

  void setStaffID(int ID){
    StaffID = ID;
  }

  //grtter functions for the attributes
  string getStaffName(){
    return StaffName;
  }
  int getStaffID(){
    return StaffID;
  }

  //* The pure virtual function
  virtual double CalculateSalary() const = 0;


  //* For the non virtual function
  void DisplayDetails(){
    cout<<"\n================================\n"<<endl;
    cout<<"Staff Name: "<<StaffName<<endl;
    cout<<"Staff ID: "<<StaffID<<endl;
  }
};

//* The derived class doctor from medicalstaff
class Doctor : public MedicalStaff {
  protected:
  float Basic_Salary;
  float Allowance;

  public:
  //setter function in the derived class Doctor
  void setBasicSalary(float Salary){
    Basic_Salary = Salary;
  }
  
  void setAllowance(float allowance){ // the difference is the case sensitivity
    Allowance = allowance;
  }


  //getter functions for the derived class Doctor
  float getBasicSalary(){
    return Basic_Salary;
  }
  float getAllowance(){
    return Allowance;
  }


  //Calculating the total salary
  double CalculateSalary() const override {
    return Basic_Salary + Allowance;
  }

};


//* Derived class Nurse from medicalStaff class
class Nurse : public MedicalStaff {

  protected:
  float Basic_Salary;
  float Overtime_Pay;


  public:
  //setter functions for the derived class Nurse
  void setBasicSalary(float Salary){
    Basic_Salary = Salary;
  }
  void setOvertimePay(float pay){
    Overtime_Pay = pay;
  }


  //getter functions for the derived class Nurse
  float getBasicSalary(){
    return Basic_Salary;
  }
  float getOvertimePay(){
    return Overtime_Pay;
  }


  //Calculating the total salary
  double CalculateSalary() const override{
    return Basic_Salary + Overtime_Pay;
  }

};


//Main Function
int main()
{
  cout<<"\n\t___HOSPITAL MANAGEMENT SYSTEM____\n"<<endl;

  //*Base class pointer
  MedicalStaff* staffptr;

  // Create objects of both derived classes
    Doctor doc1;
    doc1.setStaffName("Dr. Amina Kamau");
    doc1.setStaffID(3401);
    doc1.setBasicSalary(150000.0);
    doc1.setAllowance(45000.0);

    Nurse nurse1;
    nurse1.setStaffName("John Mwangi");
    nurse1.setStaffID(4632);
    nurse1.setBasicSalary(65000.0);
    nurse1.setOvertimePay(12000.0);


    //Pointing to doctor objet
    staffptr = &doc1;
    cout << "\n--- Doctors Details ---" << endl;
    staffptr -> DisplayDetails();
    cout<<"\n"<<endl;
    cout<<" Total Salary: Ksh "<< staffptr ->CalculateSalary()<<endl;

    //Pointing to Nurse object
    staffptr = &nurse1;
    cout << "\n\n--- Nurse Details ---" << endl;
    staffptr -> DisplayDetails();
    cout<<"\n"<<endl;
    cout<<" Total Salary: Ksh "<< staffptr ->CalculateSalary()<<endl;

  return 0;
}
