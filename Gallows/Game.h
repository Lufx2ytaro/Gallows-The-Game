#pragma once
#include<iostream>
#include"Word.h"
#include"Letters.h"
#include"Picture.h"
using namespace std;


struct Game
{
	bool findSignInContentArray(char sign, char* arrayToShow, char* arrayWithHiddenContent, int sizeOfArray)
	{
		bool isFind = false;
		for (int i = 0; i < sizeOfArray; i++)
		{
			if (arrayWithHiddenContent[i] == sign)
			{
				arrayToShow[i] = sign;
				isFind = true;
			}
		}
		return isFind;
	}
	int returnAmountOfSign(char sign, char* array, int sizeOfArray)
	{
		int amountOfSign = 0;
		for (int i = 0; i < sizeOfArray; i++)
		{
			if (array[i] == sign)
				amountOfSign++;
		}
		return amountOfSign;
	}

	void fillEmptyArray(char* emptyArray, int sizeOfArray)
	{
		for (int i = 0; i < sizeOfArray; i++)
			emptyArray[i] = '_';
	}

	void printCharArray(char* charArray, int sizeOfArray, char specSign)
	{
		for (int i = 0; i < sizeOfArray; i++)
			cout << charArray[i] << specSign;
		cout << endl;
	}

    void GameStart()
    {
        Word word;
        Letters letters;
        Picture picture;

        int maxTry = 6;
        int firstTry = 0;
        char symbol;
        bool flag;

        string findWord = word.getWord();
        int wordSZ = findWord.size();

        char* newArray = new char[wordSZ];
        char* showArr = new char[wordSZ];

        fillEmptyArray(showArr, wordSZ);

        findWord.copy(newArray, wordSZ);

        do
        {
            system("cls");
            picture.showGuy();
            cout << "number of attempts : " << firstTry << " from " << maxTry << endl;
            cout << "Answer: " << endl;
            printCharArray(showArr, wordSZ, ' ');
            do
            {
                cout << "Enter Letter :" << endl;
                cin >> symbol;
                symbol = tolower((char)symbol);
                flag = letters.checkLetter(symbol); 
                letters.addChar(symbol);
                if (flag)
                {
                    cout << "Letter is already here! " << endl;
                }
            } while (flag);

            if (!findSignInContentArray(symbol, showArr, newArray, wordSZ))
            {
                cout << "There is no such letter, spin the drum" << endl;
                picture.nextStep();
                firstTry = picture.getFirstStep();
            }
        } 
        while (firstTry < maxTry && returnAmountOfSign('_', showArr, wordSZ) != 0);
        {
            picture.showGuy();

            if (firstTry == maxTry)
            {
                cout << "Your stickMan Died :( " << endl;
                cout << "The word was: ";
                printCharArray(newArray, wordSZ, '\0');
            }
            else
            {
                cout << "You have guessed the word: ";
                printCharArray(newArray, wordSZ, '\0');
            }
        }
    }

};

