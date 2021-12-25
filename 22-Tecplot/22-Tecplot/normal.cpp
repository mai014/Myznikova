#include <iostream>
#include <fstream>
#include <cmath>
# define M_PI           3.14159265358979323846

using namespace std;

int main()
{
double step = 0.06;
ofstream fout("normal.txt");
for(double j = -3.0; j <= 3.0; j+=step)
{
	for(double i = -3.0; i <= 3.0; i+=step)
	{
		fout << j << ", " << i << ", " << exp(-((i*i+j*j)/2.0))/(2.0*M_PI) << "\n";
	}
}
fout.close();
return 0;
}