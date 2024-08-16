//--------------------------------------------------------------------
// CS215-401 LAB 1 
//--------------------------------------------------------------------
// Author: Gavin Crain
// Date: 1/23/2020
// Description: My first C++ program. It does arithmetic on two numbers.
//--------------------------------------------------------------------
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	cout << "+-----------------+\n";
	cout << "|   Number Fun!   |\n";
	cout << "| By Joseph Crain |\n";
	cout << "+-----------------+\n";
	// User Number Input 
	int firstNumber, secondNumber;
	cout << "Enter a number:  ";
	cin >> firstNumber;
	cout << "Enter another:   ";
	cin >> secondNumber;
	cout << "\n";
	// Setting up variables and solving the different problems 
	int sum, difference, product, intQuotient;
	float floatQuotient;
	sum = firstNumber + secondNumber;
	difference = firstNumber - secondNumber;
	product = firstNumber * secondNumber;
	intQuotient = firstNumber / secondNumber;
	floatQuotient = ((float)firstNumber) / secondNumber;
	// Printing the results
	cout << "Sum:             " << sum << "\n";
	cout << "Difference:      " << difference << "\n";
	cout << "Product:         " << product << "\n";
	cout << "Int Quotient:    " << intQuotient << "\n";
	cout << "Float Quotient:  " << floatQuotient << "\n";

	system("pause");
	return 0;
}