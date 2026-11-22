#include <iostream>
using namespace std;
//*Week 10 task two

//creation of a base class
class Student{
  //Encapsulation
  private:
  string StudentName;
  int AdmissionNumber;
  float FeeBalance;

  public:

  //Function to enter the student data
  void inputStudentsData(){
    //Prompting the user to enter the student Details
    cout<<"Enter the Student Name: "<<endl;
    cin>>StudentName;

    cout<<"Enter the Student Admission Number: "<<endl;
    cin>>AdmissionNumber;

    cout<<"Enter the Student Fee Balance: Ksh "<<endl;
    cin>>FeeBalance;
  }
  void makePayment(){
    int option;
    cout<<"Do you want to make payment?"<<endl;
    cout<<"\t1. Yes"<<endl;
    cout<<"\t2. No"<<endl;

    cout<<" "<<endl;
    cin>>option;

    cout<<"\n"<<endl;

    //if else statement to determine if the user want to make payment or not
    if (option == 1){
      float new_Amount;
      cout<<"Enter the amount to pay: Ksh "<<endl;
      cin>>new_Amount;

      FeeBalance = FeeBalance - new_Amount;
    }
    else if (option == 2 ){
      FeeBalance = FeeBalance;
    }
    else{
      cout<<"\n\tInvalid Option......."<<endl;
    }
  }
  void displayStatus(){
    cout<<"\n====================================\n"<<endl;
    cout<<"_____STUDENT DETAILS_____\n"<<endl;
    cout<<"Student Name: "<<StudentName<<endl;
    cout<<"Admission Number: "<<AdmissionNumber<<endl;
    cout<<"\n\tFee Balance: Ksh "<<FeeBalance<<endl;
    
    cout<<"===================================="<<endl;
  }
};

//The main function
int main(){
  cout<<"\n______STUDENT FEE SECURITY SYSTEM\n"<<endl;
  //Creation of an object of Student Class
  Student Student1;


  //Getting The Student Details
  Student1.inputStudentsData();

  //Making Payments
  Student1.makePayment();
  
  //Displaying Student Details
  Student1.displayStatus();

  return 0;
}
