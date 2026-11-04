#include <iostream>
using namespace std;

//Week 9 task two

// Parent class
class Shape {
public:
    // Virtual function
    virtual void draw() {
        cout << "Drawing Shape" << endl;
    }
};

// Derived class for circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class for rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

// Derived class for triangle
class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle" << endl;
    }
};

// Main function
int main() {

  //Project title

  cout << "\n\t_______SHAPE DRAWING SYSTEM_______\n" << endl;

    // Creating derived class objects
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    // Creating a base class pointer
    Shape *ptr;

    // Calling draw() using the base class pointer

    ptr = &circle;
    ptr->draw();

    ptr = &rectangle;
    ptr->draw();

    ptr = &triangle;
    ptr->draw();

    return 0;
}
