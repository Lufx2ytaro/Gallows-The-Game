#include "Word.h"
#include "Windows.h"
#include<iostream>
#include <fstream> // Для использования операций с файлами
#include <string>

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
		//string str="";
		words = new string[sizeV];
		for (int i = 0; i < sizeV; i++)
		{
			//getline(file, str);
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
	if (words != nullptr)
	{
		delete[] words;
		words = nullptr;
	}
}
