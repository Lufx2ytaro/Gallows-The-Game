#include "Game.h"

bool Game::findSign(char sign, char* arrayToShow, char* arrayWithHiddenContent, int sizeOfArray)
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

int Game::returnAmount(char sign, char* array, int sizeOfArray)
{

	int amountOfSign = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		if (array[i] == sign)
			amountOfSign++;
	}
	return amountOfSign;
}

void Game::fillEmptyArray(char* emptyArray, int sizeOfArray)
{
	for (int i = 0; i < sizeOfArray; i++)
		emptyArray[i] = '_';
}

void Game::showCharArr(char* charArray, int sizeOfArray, char specSign)
{
	for (int i = 0; i < sizeOfArray; i++)
		cout << charArray[i] << specSign;
	cout << endl;
}




void Game::GameStart()
{
    Word word;
    Letters letters;
    Picture picture;

    int maxTry = 6;
    int firstTry = 0;
    char symbol;
    bool flag;

    string findWord = word.getWord();// ѕолучаем рандомное слово из файла
    int wordSZ = findWord.size();// сохран€ем размер полученного слова

    char* newArray = new char[wordSZ];
    char* showArr = new char[wordSZ];

    fillEmptyArray(showArr, wordSZ);//заполн€ем массив из букв слова значением "_"

    findWord.copy(newArray, wordSZ);//копируем содержимое строки findword в массив newArr

    do
    {
        system("cls");
        picture.showGuy();
        cout << "number of attempts : " << firstTry << " from " << maxTry << endl;
        cout << "Answer: " << endl;
        showCharArr(showArr, wordSZ, ' ');//функци€ показывает содержимое массива _ _ _ _ _ _ _ _

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

        if (!findSign(symbol, showArr, newArray, wordSZ))
        {
            picture.nextStep();
            firstTry = picture.getFirstStep();
        }
    } while (firstTry < maxTry && returnAmount('_', showArr, wordSZ) != 0);
    picture.showGuy();

    if (firstTry == maxTry)
    {
        cout << "Your stickMan Died :( " << endl;
        cout << "The word was: ";
        showCharArr(newArray, wordSZ, '\0');
        cout << " Tries : ";
        cout << firstTry << endl;
    }
    else
    {
        cout << "You have guessed the word: ";
        showCharArr(newArray, wordSZ, '\0');
        cout << "Tries : ";
        cout << firstTry;
    }

    delete[] newArray;
    delete[] showArr;
    newArray = nullptr;
    showArr = nullptr;
}

