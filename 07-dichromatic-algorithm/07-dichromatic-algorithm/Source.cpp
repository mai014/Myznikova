#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

	int a=1, b=100;
    int c;
    int i=0;
    int p;
    
    cout << "Задумайте число N от 1 до 100, а я угадаю! \n";
    
    do
    {
        c=(a+b)/2;
        cout << "N больше " << c << " (1 да, 2 нет, 3 равно)? \n";
        cin >> p;
    
        if (p==1)
        {
            a = c+1;
            ++i;
        }
    
        else if (p==2)
        {    
            b = c-1;
            ++i;
        }
    }
    while (p!=3);
    
	cout << "Вы задумали " << c << "! А я молодец! Количество попыток: " << i << " \n";
	return 0;
}
