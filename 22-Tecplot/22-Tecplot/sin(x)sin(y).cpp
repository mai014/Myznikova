#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
float step = 2*acos(-1.0)/100.0;
ofstream fout("sin(x)sin(y).txt");
	for(float j = 0; j <= 2*acos(-1.0); j+=step)
	{
		for(float i = 0; i <= 2*acos(-1.0); i+=step)
		{
			fout << j << ", " << i << ", " << sin(i)*sin(j) << "\n";
		}
	}
fout.close();
}