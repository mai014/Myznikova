#include <iostream>

using namespace std;

int main()
{
	int a=1, b=100;
    int c;
    int i=0;
    int p;
    
    cout << "Think of a number N from 1 to 100, and I'll try to guess! \n";
    
    do
    {
        c=(a+b)/2;
        cout << "N is bigger than " << c << " (1 yes, 2 no, 3 equels)? \n";
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
    
	cout << "You thought of a number " << c << "I did good! Number of attempts:" << i << " \n";
	return 0;
}
