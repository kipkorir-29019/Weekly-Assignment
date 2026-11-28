#include <iostream>
#include <fstream> //<fstream> allows us to read and write files
#include <cstring> // <cstring> allows us to use strcpy function

using namespace std;


// use structure to group the information belonging to one student
struct Student {
    char name[50];
    char id[30];
    float Total_marks;
};

// main function
int main() {

  //* ios::binary – tells C++ to handle the file as binary data
  ofstream file("results.dat", ios::binary);

  // the next step is to check if the file was created successfully using if statement
  if (!file) {
    cout << "File creation failed!" << endl;
    return 1;
  }

  // Create student variable
  Student student;

  // Populate student structure
  strcpy(student.name, "Dev.ngeno");
  strcpy(student.id, "COM5201");
  student.Total_marks = 95.5;

  // Write data to file
  file.write(reinterpret_cast<char*>(&student), sizeof(student));

  //close the file after writing
  file.close();

  // display a message indicating that the file has been created successfully
  cout << "results.dat created successfully!" << endl;

  return 0;
}