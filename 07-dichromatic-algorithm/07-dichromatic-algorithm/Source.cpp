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
    
    cout << "��������� ����� N �� 1 �� 100, � � ������! \n";
    
    do
    {
        c=(a+b)/2;
        cout << "N ������ " << c << " (1 ��, 2 ���, 3 �����)? \n";
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
    
	cout << "�� �������� " << c << "! � � �������! ���������� �������: " << i << " \n";
	return 0;
}
