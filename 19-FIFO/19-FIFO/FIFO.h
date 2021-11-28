#ifndef FIFO_H
#define FIFO_H 

class Fifo
{
private:
    int* queue;
    int size;

public:
	Fifo(int N);
	
	~Fifo();
	
	void push(int num, int count);
	
	void show();
	
	void pop();
};

#endif