#include "Letters.h"
#include<vector>

Letters::Letters()
{

	firstLetters = new char[maxSize];
	for (int i = 0; i < maxSize; i++)
	{
		firstLetters[i] = ' ';
	}

}

void Letters::addChar(char sign)
{
	if (index < maxSize)
	{
		firstLetters[index] = sign;
		index++;
	}
	else
		cout << "FULLL"<<endl;

}

bool Letters::checkLetter(char sign)
{
	bool aim = false;
	for (int i = 0; i < maxSize; i++)
	{
		if (firstLetters[i] == sign)
		{
			aim = true;
		}
	}
	return aim;
}

Letters::~Letters()
{
	if (firstLetters != nullptr)
	{
		delete[]firstLetters;
		firstLetters = nullptr;
	}
}
