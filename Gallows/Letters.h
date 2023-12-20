#pragma once
#include<iostream>

using namespace std;

class Letters
{
private:

	char* firstLetters;
	const int maxSize = 21;
	int index = 0;


public:
	Letters();

	void addChar(char sign);

	bool checkLetter(char sign);

	~Letters();

};

