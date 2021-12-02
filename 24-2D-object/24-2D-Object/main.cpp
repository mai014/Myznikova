#include "Object2D.h"
#include <iostream>

using namespace std;

int main()
{
    Circle circle1(0,5,3);
    Circle circle2(3,0,8);
    Square square1(0,0,2);
    Square square2(3,4,2);
    
    cout << "Before: \n";
    
    circle1.show();
    circle2.show();
    square1.show();
    square2.show();
    
    cout << "After: \n";
  
    circle1.move(1,2);
    circle1.scale(2);
    circle1.rotate(30);
    circle1.show();
    
    circle2.move(-5,0);
    circle2.scale(4);
    circle2.rotate(-5);
    circle2.show();
    
    square1.move(1,2);
    square1.scale(2);
    square1.rotate(90);
    square1.show();

	system("pause");
    
    return 0;
}
