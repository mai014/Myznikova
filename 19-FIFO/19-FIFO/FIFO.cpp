#include "FIFO.h"
#include <iostream>

using namespace std;

Fifo::Fifo(int N) 
{
	size = N;
	queue = new int[size];
}

Fifo::~Fifo() 
{
	delete[] queue;
}

void Fifo::push(int num, int count)
{
	size = count;

    if (size == 1)
	   queue[0] = num;
	else
	{
		for(int i = 1; i < size; ++i)
			queue[size-i] = queue[size-i-1];
	        
		queue[0] = num;
	}
}

void Fifo::show()
{
	if (size == 0)
	    cout << "The container is empty. \n\n";
	else
	{
	   int m = 0;
	   
	   cout << "The container now has: ";
	   
	   while (m < size)
	   {
	       cout << queue[m] <<" ";
		   ++m;
	   } 
	   
	   cout << "\n\n"; 
	}
}
	
void Fifo::pop()
{
    cout << "'" << queue[size-1] << "'" << " is getting out first \n" ;
    --size;
}