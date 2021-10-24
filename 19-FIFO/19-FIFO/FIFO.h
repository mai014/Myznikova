#ifndef FIFO_H
#define FIFO_H 

class Fifo
{
private:
	int *queue;
	int size;
public:
	Fifo(int N);

	~Fifo();

	void push(int index, int obj);
	
	void out(int p);
	
	void pop(int k);
	
};

#endif