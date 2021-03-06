#include "LIFO.h"
#include <iostream>

using namespace std;

Lifo::Lifo(int N) 
{
	size = N;
	queue = new int[size];
}

Lifo::~Lifo() 
{
	delete[] queue;
}

void Lifo::push(int num, int count)
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

void Lifo::show()
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