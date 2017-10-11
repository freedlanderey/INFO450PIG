// PigLatinTranslator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char wordArray[50];
	char answer;
	int translateToPigLatin(char Array[]);
	void vowelCheck(char vowel[]);
	int i = 0;

	do
	{
		cout << "Enter a word to be translated into pig latin." << endl;
		cin >> wordArray;

				if (strcmp(wordArray, "the") == 0 || strcmp(wordArray, "and") == 0 || strcmp(wordArray, "but") == 0 ||
					strcmp(wordArray, "for") == 0 || strcmp(wordArray, "nor") == 0 || strcmp(wordArray, "yet") == 0)
				{
					cout << wordArray << endl;
				}
				else
				{
					if (wordArray[0] == '\0' || wordArray[1] == '\0' || wordArray[2] == '\0')
					{
						cout << wordArray << endl;
					}
					else
					{
						if (wordArray[0] == 'A' || wordArray[0] == 'a' || wordArray[0] == 'E' || wordArray[0] == 'e' ||
							wordArray[0] == 'I' || wordArray[0] == 'i' || wordArray[0] == 'O' || wordArray[0] == 'o' ||
							wordArray[0] == 'U' || wordArray[0] == 'u')
						{
							cout << wordArray << "ay" << endl;
						}
						else
						{
							translateToPigLatin(wordArray);
						}
					}
				}

			cout << "Do another? (Enter Y for yes.)" << endl;
			cin >> answer;

	} while ((answer == 'Y') || (answer == 'y'));

    return 0;
}

int translateToPigLatin(char wordArray[])
{
	char pigLatin[50];

		//take away first letter of word
		for (int i = 1; i <= 50; i++)
		{
			pigLatin[i - 1] = wordArray[i];
		}

	cout << pigLatin << wordArray[0] << "ay" << endl;

	return 0;
}
