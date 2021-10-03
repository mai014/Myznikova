#include <iostream>
#include <cstdlib>

using namespace std;

void exchange1(int i,int j)
{
	int k;
	
	k = i;
	i = j;
	j = k;
	
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";
}

void exchange2(int i, int j)
{
    swap(i, j);
	
	cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";
}

void exchange3(int i, int j)
{
    int k;
    k = i - j;
    
    i = j;
    j = i + k;
    
    cout << "i = " << i << "\n";
	cout << "j = " << j << "\n";
}

int main()
{
	
	while(true)
	{
		cout << "Enter a number N = ";
	    int N;
	    cin >> N;

		if ( std::cin.fail() || N < 2 || N > 100 )
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
			cout << "This number is not allowed. Please, try again: \n";
		}

		else
		{
			int my_array[5];

			cout << "Initial array: ";

			for (int i=0; i < N; ++i)
			{	
			    my_array[i] = rand()%100;
                cout << my_array[i] << " ";
			}	
			
			for (int n = 0; n < N; ++n)
			{
				int min_index = n;

				for (int counter = min_index + 1; counter < N; ++counter)
				{
					if (my_array[counter] < my_array[min_index])
						min_index = counter;	
				}

				swap(my_array[n], my_array[min_index]);
			}

			cout << "\nSorted array: ";
			
			for (int m = 0; m < N; ++m)
				cout << my_array[m] << " ";
			
			break;
		}
	}

	cout << "\nEnter a number i = ";
	int i;
	cin >> i;
	cout << "Enter a number j = ";
	int j;
	cin >> j;

	cout << "Result of the first method of exchange: \n";
	exchange1(i, j);
	
	cout << "Result of the second method of exchange: \n";
	exchange2(i, j);
	
	cout << "Result of the third method of exchange: \n";
	exchange3(i, j);
	
    return 0;
}