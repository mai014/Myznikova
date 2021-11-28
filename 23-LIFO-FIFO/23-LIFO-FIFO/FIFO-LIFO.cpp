#include "FIFOLIFO.h"
#include <iostream>

using namespace std;

Container::Container(int N) 
{
	size = N;
	queue = new int[size];
}

Container::~Container() 
{
	delete[] queue;
}

void Container::push(int num, int count)
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

void Container::show()
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

void Container::pop() {}

Fifo::Fifo(int N)
    :Container(N)
{
}

void Fifo::pop()
{
    cout << "'" << queue[size-1] << "'" << " is getting out first \n" ;
    --size;
}

Lifo::Lifo(int N)
    :Container(N)
{
}

void Lifo::pop()
{
    cout << "'" << queue[0] << "'" << " is getting out \n" ;

	int k = 0;
	while (k < size - 1)
	{
		queue[k] = queue[k + 1];
		++k;
	}
	
	--size;
}