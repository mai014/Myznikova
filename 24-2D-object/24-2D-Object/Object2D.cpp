#include "Object2D.h"
#include <iostream>
#include <cmath>

using namespace std;

Object2D::Object2D(float x, float y): x_centre(x), y_centre(y) {}
void Object2D::move() {}
void Object2D::rotate() {} 
void Object2D::scale() {}
void Object2D::show(){}

Circle::Circle(float x, float y, float r): Object2D(x, y), radius(r) {}
void Circle::move(float x_vect, float y_vect) 
{
    x_centre = x_centre + x_vect;
    y_centre = y_centre + y_vect;
}
void Circle::rotate(int alpha)
{
}
void Circle::scale(double size)
{
    radius = radius*size;
}
void Circle::show()
{
    cout << "Circle, centre (" << x_centre << "," << y_centre << "), radius = " << radius << ".\n";
}

Square::Square(float x, float y, float length): Object2D(x, y), side(length), x_vertex(x_centre + side/2),  y_vertex(y_centre + side/2)
{
}
void Square::move(float x_vect, float y_vect) 
{
    x_centre = x_centre + x_vect;
    y_centre = y_centre + y_vect;
    x_vertex = x_vertex + x_vect;
    y_vertex = y_vertex + y_vect;
}
void Square::rotate(int alpha)
{
	double new_x_vertex, new_y_vertex, xx_vertex, yy_vertex, rad;
	rad = (alpha*acos(-1))/180;
    new_x_vertex = x_vertex - x_centre;
    new_y_vertex = y_vertex - y_centre;
    xx_vertex = new_x_vertex * cos(rad) - new_y_vertex * sin(rad);
    yy_vertex = new_x_vertex * sin(rad) + new_y_vertex * cos(rad);
	x_vertex = xx_vertex + x_centre;
	y_vertex = yy_vertex + y_centre;
}
void Square::scale(double size)
{
    side = side*size;
	x_vertex = x_centre + side/2; 
	y_vertex = y_centre + side/2;
}
void Square::show()
{
    cout << "Square, centre (" << x_centre << "," << y_centre << "), vertex (" << x_vertex << "," << y_vertex << ").\n";
}
