// Calculator de varsta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{


	int anul_nasterii;
	std::cout << "Introduceti anul nasterii " << std::endl;
	std::cin >> anul_nasterii;
	int anulCurent = 2024;
    int varsta = anulCurent - anul_nasterii;
	std::cout << "Varsta mea este: " << varsta << std::endl;



}

