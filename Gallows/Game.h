#pragma once
#include<iostream>
#include"Word.h"
#include"Letters.h"
#include"Picture.h"
using namespace std;


struct Game
{
	bool findSign(char sign, char* arrayToShow, char* arrayWithHiddenContent, int sizeOfArray);
	int returnAmount(char sign, char* array, int sizeOfArray);
	void fillEmptyArray(char* emptyArray, int sizeOfArray);
	void showCharArr(char* charArray, int sizeOfArray, char specSign);
	void GameStart();
};