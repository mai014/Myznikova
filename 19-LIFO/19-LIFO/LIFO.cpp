#include "LIFO.h"
#include <iostream>
#include <cassert>

using namespace std;

Lifo::Lifo(int N) 
{
	assert(N > 0);
	
	size = N;

	queue = new int[size];
}

Lifo::~Lifo() 
	{
		delete[] queue;
	}

void Lifo::push(int index, int obj)
{
	queue[size-index-1] = obj;
}
	
void Lifo::pop(int k)
{
	int m = 0;
	cout << "The container now has: ";
	while (m < size-k)
	{
		cout << queue[m] <<" ";
		++m;
	}
    
	cout << "\n" << k + 1 << ". '" << queue[0] << "'" << " is getting out \n" ;

	int i = 0;
	while (i < size - 1)
	{
		queue[i] = queue[i + 1];
		++i;
	}

	if (k == size - 1)
		cout << "The container is empty! \n";
}