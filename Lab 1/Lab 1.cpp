// Lab 1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

bool guessed = false;
int iGuesses = 0;
int iGuessedNum;
;

int main()
{
	srand(time(NULL));
	int iRandom = rand() % 1000 + 1;
	cout << "Pick a number between 1 and 1000, you have 8 guesses" << endl;

	while (!guessed)
	{
		cin >> iGuessedNum;

		if (iGuessedNum < iRandom)
		{
			cout << "Too low" << endl;
			iGuesses++;
		}
		else if (iGuessedNum > iRandom)
		{
			cout << "Too high" << endl;
			iGuesses++;

		}
		else if (iGuessedNum == iRandom)
		{
			guessed = true;
			cout << "Nice job" << endl;
			system("Pause");
			return 0;
		}

		if (iGuesses == 8)
		{
			cout << "lol bad" << endl;
			cout << "the correct answer was " << iRandom << endl;
			system("Pause");
			return 0;
		}


	}
}



