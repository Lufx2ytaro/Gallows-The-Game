#include "Word.h"
#include "Windows.h"
#include<iostream>

using namespace std;

Word::Word()
{
	

	file.open("vocablurary.txt", ios::in);

	if (!file.is_open())
	{
		cout << "I can't open File :( "<<endl;
	}
	else
	{
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		words = new string[sizeV];
		for (int i = 0; i < sizeV; i++)
		{
			file >> words[i];
		}
	}
	file.close();
}

string Word::getWord()
{
	srand(time(NULL));
	int value = rand() % 10;
	return words[value];
}

Word::~Word()
{
	delete[] words;
}
