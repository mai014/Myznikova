#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a string: \n";
    char name[100];
    cin >> name;
    
    char name2[100];
    
    for (int i=0; i < 100; ++i)
        name2[i]=name[i];
    
    cout << "A copy of the string: \n" << name2 << "\n";
    
    return 0;
}
