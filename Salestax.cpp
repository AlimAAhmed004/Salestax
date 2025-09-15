// Salestax.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;
const double stateTax = .04;
const double countyTax = .02;

int main()
{
	double stateTax;
	double countyTax;
	double itemCost = 95.00;

	cout << "Please enter the state tax (as a demical point): ";
	cin >> stateTax;
	cout << endl << "Please enter the county tax (as a decminal point): ";
	cin >> countyTax;
	cout << endl << "What is the cost of the item you are purchasing? ";
	cin >> itemCost;

	//double cost = 0.0; // Removed to avoid redefinition error
	double totaltax = itemCost * stateTax + itemCost * countyTax;
	double totalCost = itemCost + totaltax;

	cout << "The cost of the item is $" << itemCost << "\n";
	cout << "The total tax including a state tax of " << stateTax << endl;
	cout << " and a county tax of " << countyTax << endl;
	cout << " You owe the store a total of " << totalCost;


	return 0;

}