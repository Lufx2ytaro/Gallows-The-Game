#include "Picture.h"
#include<iostream>

using namespace std;


Picture::Picture()
{

	firstStep = 0;
}

void Picture::nextStep()
{
	if (firstStep < maxStep)
	{
		firstStep++;
	}
}

void Picture::showGuy()
{
    if (firstStep == 0) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else if (firstStep == 1) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else if (firstStep == 2) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |        |" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else if (firstStep == 3) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |       /|" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else if (firstStep == 4) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |       /|\\" << endl;
        cout << " |" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else if (firstStep == 5) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |       /|\\" << endl;
        cout << " |       / " << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    } else if (firstStep == 6) {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |       /|\\" << endl;
        cout << " |       / \\" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
    }
    else {
        cout << "  ________" << endl;
        cout << " |        |" << endl;
        cout << " |        O" << endl;
        cout << " |       /|\\" << endl;
        cout << " |       / \\" << endl;
        cout << " |" << endl;
        cout << "_|________" << endl;
        cout << "HE DIED........." << endl;
    }
}

int Picture::getFirstStep()
{
    return firstStep;
}

