#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
float step = 2*acos(-1.0)/100.0;
ofstream fout("sin(x).txt");
	for(float i = 0; i <= 2*acos(-1.0); i+=step)
	{
		fout << i << ", " << sin(i) << "\n";
	}
fout.close();
}