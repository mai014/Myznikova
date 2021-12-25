#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
ofstream fout("xsin(x).txt");
	for(int i = -100; i <= 100; i+=1)
	{
		fout << i << ", " << i*sin(i) << "\n";
	}
fout.close();
}