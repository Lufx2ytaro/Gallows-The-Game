#pragma once
#include<iostream>
#include<fstream>

using namespace std;

class Word
{
private:

	string* words = nullptr;
	ifstream file;
	int sizeV = 6;//size of vocabulary

public:

	Word();
	string getWord();
	~Word();
};

