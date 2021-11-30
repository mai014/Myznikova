#ifndef CSLICE_H
#define CSLICE_H
#include <string>

using namespace std;

class Slice
{
private:
    int* arr;
    int size;
    int colon;
    string strt;
    string stp;
    string stepch;
    
public:
	Slice(string &sl);
	
	~Slice();
	
	void fun();

};
#endif