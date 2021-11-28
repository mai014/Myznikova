#ifndef FIFOLIFO_H
#define FIFOLIFO_H 

class Container
{
public:
    int* queue;
    int size;

	Container(int N);
	
	~Container();
	
	void push(int num, int count);
	
	void show(); 
	
	virtual void pop();
};

class Fifo: public Container
{
public:
	Fifo(int N);
	
	virtual void pop();
};

class Lifo: public Container
{
public:
	Lifo(int N);
	
	virtual void pop();
};

#endif