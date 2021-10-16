#include "crectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle(double _xLd, double _yLd, double _xRd, double _yRd, double _xLu, double _yLu, double _xRu, double _yRu) 
	: xL_down(_xLd), yL_down(_yLd), xR_down(_xRd), yR_down(_yRd), xL_up(_xRu), yL_up(_yLu), xR_up(_xRu), yR_up(_yRu) 
{
}

int CRectangle::cross(const CRectangle &b)
{
	if (b.xL_down == xL_down && b.yL_down == yL_down && b.xR_up == xR_up && b.yR_up == yR_up)
		cout << "Rectangles intersect! \n";
	else 
	{
		int count = 0;

		if (b.xL_down >= xL_down && b.xL_down <= xR_down && b.yL_down >= yL_down && b.yL_down <= yL_up)
			++count;
		if (b.xR_down >= xL_down && b.xR_down <= xR_down && b.yR_down >= yL_down && b.yR_down <= yL_up)
			++count;
		if (b.xL_up >= xL_down && b.xL_up <= xR_down && b.yL_up >= yL_down && b.yL_up <= yL_up)
			++count;
		if (b.xR_up >= xL_down && b.xR_up <= xR_down && b.yR_up >= yL_down && b.yR_up <= yL_up)
			++count;

		if (count == 0 || count == 4)
			cout << "Rectangles don't intersect! \n";
		else
			cout << "Rectangles intersect! \n";
	}

	return 0;
}

	



