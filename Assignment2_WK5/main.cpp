#include <iostream>
#include "shared.h"

using namespace std;

int main()
{

    // Creating object of type Triangle, Circle, Rectanlgle and Square
    Triangle triangle(3, 4);
    Circle circle(15);
    Rectangle rectangle(4, 4);
    Square square(4);

    
  
    /****CALLING PROTOTYPE FUNCTION****/
    /****CHECKING RELATION BETWEEN CIRCLE AND TRIANGLE****/
    if (isEqual(circle, triangle))
    {
        cout << "\nCircle is equal to Triangle, prototype function works!";
    }
    else
    {
        cout <<"\nCircle is not equal to Triangle, prototype function works!";
    }
    /****CHECKING RELATION BETWEEN CIRCLE AND TRIANGLE****/
    if (isEqual(rectangle, square))
    {
        cout << "\nRectangle is equal to Square, prototype function works!";
    }
    else
    {
        cout <<"\nRectangle is not equal to Square, prototype function works!";
    }

    return 0;
}