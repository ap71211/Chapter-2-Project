// Chapter 2 Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 
int main()
{


	double seaLevelRise = 1.5; double levelPerYear_1 = 5; double levelPerYear_2 = 7; double levelPerYear_3 = 10; double amountSeaLevel;

	cout << "Sea Level Rise by 1.5mm per year" << endl; cout << "____" << endl;

	cout << "Sea Level after 5 years: "; 
	amountSeaLevel = seaLevelRise * levelPerYear_1; cout << amountSeaLevel << "mm" << endl;

	cout << "Sea Level after 7 years: "; 
	amountSeaLevel = seaLevelRise * levelPerYear_2; cout << amountSeaLevel << "mm" << endl;

	cout << "Sea Level after 10 years: "; 
	amountSeaLevel = seaLevelRise * levelPerYear_3; cout << amountSeaLevel << "mm" << endl;

	return 0;
}