#include <iostream>
using namespace std;
//Week 11 task two

//* Abstract Class
class Shape{

  public:
  //A pure virtual function
  virtual double CalculateArea() const = 0;

};


//The derived class of Circle from Shape
class Circle : public Shape{
  protected:
  float radius;

  public:
  //setter for radius
  void setRadius(float r){
    radius = r;
  }

  //getter for radius
  float getRadius(){
    return radius;
  }

  //Function to calculate the area  of a circle
  double CalculateArea() const override{

    double Area;
    double pi = 3.142;

    Area = pi * radius * radius;

    cout << "The Area Of A Circle: " << Area << endl;

    return Area;
  }
};



//The derived class of Rectangle from Shape
class Rectangle : public Shape{

  protected:
  float length;
  float width;

  public:
  //setters and getters

  //For length

  void setLength(float l){
    length = l;
  }
  float getLength(){
    return length;
  }

  //for width

  void setWidth(float w){
    width = w;
  }
  float getWidth(){
    return width;
  }

  //Function to calculate the area of a Rectangle
  double CalculateArea() const override{

    float Area;

    Area = (length*width);

    cout<<"The Area Of A Rectangle: "<<Area <<endl;
    
    return Area;
  }

};


//Main function
int main(){
  cout<<"\n\t_______SHAPE AREA SYSTEM________\n"<<endl;

  //*Base class pointer
  Shape* shapeptr;

  //Creating of an objects of each derived classes
  //For Circle class
  Circle myCircle;
  myCircle.setRadius(12.50);

  //for Rectangle class
  Rectangle myRectangle;
  myRectangle.setLength(20.5);
  myRectangle.setWidth(12.5);


  //Pointing the circle class
  shapeptr = &myCircle;
  cout<<"-----Circle Details----\n"<<endl;
  shapeptr ->CalculateArea();

  //Pointing the rectangle class
  shapeptr = &myRectangle;
  cout << "\n\n-----Rectangle Details----\n" << endl;
  shapeptr->CalculateArea();

  return 0;
}