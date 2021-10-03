#include <iostream>
#include <string>
#include <cstring>

using namespace std;

bool compar(char* word, char* copy_word, int N)
{
	int p = 0;
	int k = 0;
	while (k < N)
	{
		if(copy_word[k] == word[k])
		{
			p++;
			k++;
		}
		else
			k++;
	}
	return (p != N);
}

int main()
{
	
	char word[100];
	char copy_word[100];

    cout << "Think of a word: \n";
    cin >> word;
    cout << "Guess the word! \n";
    
    const int N = strlen(word);
    
    for (int i = 0; i < N ; i++)	
	{
		copy_word[i] = '-';
		cout << copy_word[i];
	}

	cout << "\n";

	while (compar(word, copy_word, N))
	{
		cout << "Enter one letter: \n";
		string your_letter;
		cin >> your_letter;

		char letter;
        letter = your_letter[0];
		
		for(int j = 0; j < N; j++)
		{
			if (word[j] == letter)
			{
				copy_word[j] = letter;
			}
		}
		
		for (int i = 0; i < N ; i++)
			cout << copy_word[i];
		
		cout << "\n";
	}

	cout << "You guessed the word! \n";
    
	return 0;
}
