#ifndef CRECTANGLE_H
#define CRECTANGLE_H

class CRectangle
{
public:
	const double xL_down, yL_down, xR_down, yR_down, xL_up, yL_up, xR_up, yR_up;

	CRectangle (double _xLd, double _yLd, double _xRd, double _yRd, double _xLu, double _yLu, double _xRu, double _yRu);

	int cross(const CRectangle &b);
};

#endif