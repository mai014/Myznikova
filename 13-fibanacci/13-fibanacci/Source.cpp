#include <iostream>

using namespace std;

int fibonacci(int N)
{
    if (N==0)
        return 0;
    
    if (N==1)
        return 1;
    
    else
        return fibonacci(N-1)+fibonacci(N-2);
}

int main()
{
   
	while (true)
    {
		cout << "Enter a number from 1 to 100: \n";
		int N;
		cin >> N;
        
		if (std::cin.fail() || N<1 || N>100)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "Invalid value! Try again. \n";
        }
        
        else
        {
            cout << "The first " << N << " fibonacci numbers: \n";
			
			for (int n=0; n<N; ++n)
					cout << fibonacci(n) << " ";
		break;
		}
	}
   
    return 0;
}