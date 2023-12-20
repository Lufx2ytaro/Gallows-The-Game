#define _CRT_SECURE_NO_WARNINGS
#include <windows.h>
#include <iostream>
#include <thread>

#include"Game.h"






int main()
{
	Game start{};

	auto f= chrono::high_resolution_clock::now();
	start.GameStart();
	auto e = chrono::high_resolution_clock::now();
	chrono::duration<float> duration = e-f;
	cout << endl << "Time: " << duration.count() << " s" << endl;;
	return 0;




	
}