#include "FIFO.h"
#include <iostream>
#include <cassert>

using namespace std;

Fifo::Fifo(int N) 
{
	assert(N > 0);
	
	size = N;

	queue = new int[size];
}

Fifo::~Fifo() 
	{
		delete[] queue;
	}

void Fifo::push(int index, int obj)
{
	queue[size-index-1] = obj;
}
	
void Fifo::pop(int k)
{
	int m = 0;
	cout << "The container now has: ";
	while (m < size)
	{
		cout << queue[m] <<" ";
		++m;
	}

    cout << "\n" << k + 1 << ". '" << queue[size-1] << "'" << " is getting out first \n" ;

	--size;

}