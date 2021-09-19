#include<iostream>

using namespace std;

int factorial (int value)
{
    int result = 1;
    
    for(int count = 1; count <= value; ++count)
        result *= count;
    
    return result;
}


int main ()
{
    while(true)
	{
		cout << "Enter an integer: \n";
		int value;
		cin >> value;
    
		if ( std::cin.fail() || value < 0 || value > 100000 )
		{
			std::cin.clear();
			std::cin.ignore(32767,'\n');
			cout << "This number is not allowed. Please, try again: ";
		}
		else
		{
			cout << "The factorial of " << value << " is " << factorial(value) << "\n";
		    break;
		}

	}

	return 0;
}

