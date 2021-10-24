#include "LIFO.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "How many numbers do you want to put in the container? ";
	int N;
	cin >> N;

	Lifo queue(N);
	
	int i = 0;
	
	while (i < N)
	{
		cout << "Enter an integer: ";
		int num;
		cin >> num;
		
		queue.push(i, num);
		
		++i;
	}
	
	for (int j = 0; j < N; ++j)
		queue.pop(j);

	//system ("pause");
	return 0;
}