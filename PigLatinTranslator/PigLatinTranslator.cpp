// PigLatinTranslator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	char wordArray[50], pigLatin[50];
	char firstLetter[2];
	
	gets_s(wordArray);

	cout << wordArray << endl;

	cout << wordArray[0] << endl;

	for (int i = 0; i < 50; i++)
	{
		pigLatin[i] = wordArray[i] + wordArray[0];
	}

	cout << pigLatin << endl;

	//strcat_s(pigLatin, wordArray);
	//strcat_s(pigLatin, firstLetter);

    return 0;
}

