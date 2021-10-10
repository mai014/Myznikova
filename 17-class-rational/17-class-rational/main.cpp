//#include <iostream>
#include "crational.h"

int main()
{
	CRational fraction1(-3, 1);
	
	CRational fraction2(-1,-2);
	
	fraction1.multiplication(fraction2);

	fraction1.addition(fraction2);

	//system("pause");
	return 0;
}