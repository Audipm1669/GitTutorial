#include "pch.h"
#include <iostream>
#include "stdafx.h"
#include <string>

using namespace System;

bool Guess(int number) {
	static int target = -1;

	if (target == -1) {
		Random r;
		target = r.Next() % 100 + 1;

	}

	if (number > target) {
		std::cout << "Smaller" << std::endl;
		return false;
	}
	else {
		std::cout << "Bigger" << std::endl;
		return false;
	}
	return true;
}

int main(array<System::String ^> ^args) {
	int guess;
	do {
		std::cout << "Choose a number between 1 -100 :";
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}
