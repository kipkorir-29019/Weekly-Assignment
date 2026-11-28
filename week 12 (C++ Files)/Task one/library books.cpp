#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    string bookTitle;

    // Open file in append mode
    ofstream file("borrowed_books.txt", ios::app);

    // Check if file opened successfully
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    // Enter book title
    cout << "Enter book title: ";
    getline(cin, bookTitle);

    // Store title in the file
    file << bookTitle << endl;

    // Close the file
    file.close();

    // Confirmation message
    cout << "Book title stored successfully!" << endl;

    return 0;
}
