#include "crectangle.h"
#include <fstream> 
#include <iostream>

using namespace std;

int main()
{
	double xL_d1, yL_d1, xR_d1, yR_d1, xL_u1, yL_u1, xR_u1, yR_u1;
	double xL_d2, yL_d2, xR_d2, yR_d2, xL_u2, yL_u2, xR_u2, yR_u2;

	ifstream f("rect-not-inter.txt");
 
	f >> xL_d1 >> yL_d1 >> xR_d1 >> yR_d1 >> xL_u1 >> yL_u1 >> xR_u1 >> yR_u1 >> xL_d2 >> yL_d2 >> xR_d2 >> yR_d2 >> xL_u2 >> yL_u2 >> xR_u2 >> yR_u2;
	
	CRectangle rect1(xL_d1, yL_d1, xR_d1, yR_d1, xL_u1, yL_u1, xR_u1, yR_u1);
	CRectangle rect2(xL_d2, yL_d2, xR_d2, yR_d2, xL_u2, yL_u2, xR_u2, yR_u2);

	rect1.cross(rect2);
	
	//system ("pause");

	return 0;
}


