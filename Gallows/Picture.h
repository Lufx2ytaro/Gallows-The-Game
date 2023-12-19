#pragma once
class Picture
{
private:

	int firstStep = 0;
	const int maxStep = 6;
public:

	Picture();
	void nextStep();
	void showGuy();
	int getFirstStep();
};

