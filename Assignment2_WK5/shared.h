#ifndef SHARED_H
#define SHARED_H
#include <math.h>

class Shape
{
protected:
    float area;
    float perimeter;

public:
    Shape(float a, float b)
    { // Constructor
        area = a;
        perimeter = b;
    }
    // Creating overload compare operator for == which will return 0 or 1
    friend bool operator==(const Shape &shape1, const Shape &shape2)
    {
        return shape1.area == shape2.area && shape1.perimeter == shape2.perimeter;
    }
    // Creating overload compare operator for < which will return 0 or 1
    friend bool operator<(const Shape &shape1, const Shape &shape2)
    {
        return shape1.area < shape2.area;
    }
    // Creating overload compare operator for > which will return 0 or 1
    friend bool operator>(const Shape &shape1, const Shape &shape2)
    {
        return shape1.area > shape2.area;
    }
};

class Triangle : public Shape
{
public:
    Triangle(float width, float height) : Shape(width * height / 2, width + height + sqrt(width * width + height * height)) {}
};

class Rectangle : public Shape
{
public:
    Rectangle(float width, float height) : Shape(width * height, 2 * (width + height)) {}
};

class Square : public Shape
{
public:
    Square(float width) : Shape(width * width, 4 * width) {}
};

class Circle : public Shape
{
public:
    Circle(float radius) : Shape((3 * radius * radius) / 2, 2 * 3 * radius) {}
};

template <class Shape1, class Shape2>
bool isEqual(Shape1 shape1, Shape2 shape2)
{
    return shape1 == shape2 ? true : false;
}
#endif