#include <iostream>
#include <Windows.h>

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
    setlocale(LC_ALL, "Russian");
    
	while (true)
    {
		cout << "Введите число от 1 до 100: \n";
		int N;
		cin >> N;
        
		if (std::cin.fail() || N<1 || N>100)
        {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "Недопустимое значение! Попробуйте снова. \n";
        }
        
        else
        {
            cout << "Первые " << N << " чисел Фибоначчи: \n";
			
			for (int n=0; n<N; ++n)
					cout << fibonacci(n) << " ";
		break;
		}
	}
    
    return 0;
}