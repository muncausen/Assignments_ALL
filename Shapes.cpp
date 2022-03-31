#include <iostream>
#include <math.h>

using namespace std;

class Shape{
protected:    
    float area;
    float perimeter;
    
public:
    Shape (float a, float b){ //Constructor 
        area = a;
        perimeter = b;
        
    }
    //Creating overload compare operator for == which will return 0 or 1
    friend bool operator==(const Shape& shape1, const Shape& shape2){
        return shape1.area == shape2.area && shape1.perimeter == shape2.perimeter;
    } 
    //Creating overload compare operator for < which will return 0 or 1
    friend bool operator<(const Shape& shape1, const Shape& shape2){
        return shape1.area<shape2.area;
    }
    //Creating overload compare operator for > which will return 0 or 1
    friend bool operator>(const Shape& shape1, const Shape& shape2){
        return shape1.area>shape2.area;
    }
};


class Triangle : public Shape{
public:
     
    Triangle(float width, float height) : Shape(width*height / 2,width+height+sqrt(width*width+height*height)) {}
     
};

class Rectangle : public Shape{
public:
    Rectangle(float width, float height) : Shape(width*height,2*(width+height)) {}

};

class Square : public Shape{
public:
    Square(float width) : Shape(width*width, 4*width) {}
};

class Circle : public Shape{
public:
    Circle (float radius) : Shape ((3*radius*radius)/2, 2*3*radius) {}

};

int main(){

    //Creating object of type Triangle, Circle, Rectanlgle and Square
    Triangle triangle (3, 4);
    Circle circle (15);
    Rectangle rectangle (4, 4);
    Square square (4);

    //Using overload compare operator to check relation between two objects of different classes
    bool t = rectangle == square;
    bool y = circle < triangle;

    //Display equality between two objects of different classes
    //For rectangle and square
    if (t){
        cout << "\nRectangle object equals Square object!";
    }
    else {
        cout << "\nRectangle object DOESN'T equal Square object!";
    }
    //For circle and triangle
    if (t){
        cout << "\nCircle object smaller than Triangle object!";
    }
    else {
        cout << "\nCircle object ISN'T smaller than Square object!";
    }

    return 0;
}