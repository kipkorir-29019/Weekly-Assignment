#include <iostream>
#include <fstream> //<fstream> allows us to work with files
using namespace std;
//week 12 task three
//*Sales.txt file


int main(){

  ifstream file("sales.txt"); //we open a file called sales.txt for reading

  //if statement to determine if the file exists
  if (!file) { 
    cout << "Error opening file!" << endl;
    return 1;
  }

  //Variable declaration
  int sales;
  int total_sales = 0;

  //this is used to add sales to total
  while (file >> sales) {
    total_sales += sales;
  }
  cout << "Total sales = " << total_sales <<" Ksh" << endl;

  file.close(); //sales.txt file is being closed after execution
  return 0;
}