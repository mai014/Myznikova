#ifndef OBJECT2D_H
#define OBJECT2D_H

class Object2D
{
public:
    float x_centre;
    float y_centre;

	Object2D(float x, float y);
	
	virtual void move();
	virtual void rotate(); 
	virtual void scale();
	virtual void show();
};

class Circle: public Object2D
{
public:
	float radius;
	
	Circle(float x, float y, float r);
	
	virtual void move(float x_vect, float y_vect);
	virtual void rotate(int alpha); 
	virtual void scale(double size);
	virtual void show();
};

class Square: public Object2D
{
public:
	float side, x_vertex, y_vertex;
	
	Square(float x, float y, float length);
	
	virtual void move(float x, float y);
	virtual void rotate(int alpha); 
	virtual void scale(double size);
	virtual void show();
};

#endif
