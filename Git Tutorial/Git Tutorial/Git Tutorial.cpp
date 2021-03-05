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
	if (number == target) {
		std::cout << "Corretct!!";
		target = -1;
		return true;
	}
	else std::cout << "Wrong" << std::endl;
	return false;
}

int main(array<System::String ^> ^args) {
	int guess;
	do {
		std::cin >> guess;
	} while (!Guess(guess));
	return 0;
}
