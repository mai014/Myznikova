#include "CSlice.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "Enter slice: ";
	string sl;
	cin >> sl;
	
    Slice obj(sl);
	obj.fun();
	
	return 0;
}