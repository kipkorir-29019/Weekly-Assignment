#include <iostream>
#include <fstream>

using namespace std;

// create a Structure
struct Student {
    char name[50];
    char id[30];
    float Total_marks;
};

int main() {

    // Open binary file
    ifstream file("results.dat", ios::binary);

    // Check file
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Create Student instance
    Student student;

    // Read and display records
    while (file.read(reinterpret_cast<char*>(&student), sizeof(student))) {

        cout << " Name: " << student.name << endl;
        cout << "   ID: " << student.id << endl;
        cout << "Marks: " << student.Total_marks << endl;

        cout << "-------------------" << endl;
    }

    file.close();

    return 0;
}
