#ifndef LIFO_H
#define LIFO_H 

class Lifo
{
private:
	int *queue;
	int size;
public:
	Lifo(int N);

	~Lifo();

	void push(int index, int obj);
	
	void out(int p);
	
	void pop(int k);
	
};

#endif