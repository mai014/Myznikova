#ifndef LIFO_H
#define LIFO_H 

class Lifo
{
private:
    int* queue;
    int size;

public:
	
	Lifo(int N);
	
	~Lifo();
	
	void push(int num, int count);
	
	void show();
	
	void pop();
	
};

#endif