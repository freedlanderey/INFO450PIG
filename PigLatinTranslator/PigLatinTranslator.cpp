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
	int pigLatinTranslator(char Array[]);
	void vowelCheck(char vowel[]);

	do
	{
		cout << "Enter a word to be translated in to pig latin." << endl;		
		cin >> wordArray;

		pigLatinTranslator(wordArray);

		cout << "Do another? (Enter Y for yes.)" << endl;
		cin >> answer;

	} while ((answer == 'Y') || (answer == 'y'));


    return 0;
}

int pigLatinTranslator(char wordArray[])
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

void vowelCheck(char wordArray[])
{
	
}