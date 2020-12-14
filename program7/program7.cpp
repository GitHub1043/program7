// program7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand (time(0));

	int num = 0;

	// Output the first line

	cout << "The number generated is ";

	for (int i = 0; i < 100; i++){
		num = rand() % 50 + 1;								// Generate random numbers

		// you write code to test for odd nunmber

		while (num % 2 != 0){
		num = rand() % 50 + 1;
		}

		cout << " " << num;

		if (i % 10 == 0){
			cout << endl;									// Skip 10 lines

		}

	}

	cout << endl;											// Skip a line

	return 0;
}

