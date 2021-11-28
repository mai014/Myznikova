#include "FIFOLIFO.h"
#include <iostream>

using namespace std;

int main()
{
	Lifo array(0);
	
	Container &rCont = array;
	
	cout << "Enter the number you want to put in the container: ";
	int num;
	cin >> num;
	
	int count = 1;
	
	rCont.push(num, count);
	rCont.show();

	while(true)
	{
	    int index;
	    
	    if (count > 0)
	    {
	        cout << "Enter 1 to continue, enter 0 to pull the number from the container: ";
	        cin >> index;
	    }
	    else
	    {
	        cout << "Enter 1 to continue: ";
	        cin >> index; 
	        while (index != 1)
	        {
	            cout << "Please, try again. \n\n";
	            cout << "Enter 1 to continue: ";
	            cin >> index;
	        }
	    }
	    
	    switch(index)
	    {
			case 1:
				++count;
	            
				cout << "Enter the number you want to put in the container: ";
				int num;
				cin >> num;
	            
				rCont.push(num, count);
				rCont.show();
	            
				break;
	            
            case 0:
				--count;
                
                rCont.pop();
                rCont.show();
                
                break;
            
			default:
				cout << "Please, try again. \n\n";
                
				break;
		}
	}

	return 0;
}