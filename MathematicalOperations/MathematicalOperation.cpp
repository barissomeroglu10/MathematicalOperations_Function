/*
In this code, we will get 10 numbers from user and than
calculate square, cube and square root for each number.

Developer: Barış Someroğlu
Date: 13.04.2024 - 09:30 pm
*/



#include <iostream>
#include <cmath> // to use sqrt function

using namespace std;

// Prototype declaration for functions
double Square(double);
double Cube(double);

int main()
{
	double Number;

	for (int i = 1; i <= 10; i++)
	{
		cout << "\n" << "Please Enter " << i << ". Number = ";
		cin >> Number;

		// Call functions
		cout << "Square for " << i << ". Number = " << Square(Number) << endl;
		cout << "Cube for " << i << ". Number = " << Cube(Number) << endl;
		cout << "Square Root for " << i << ". Number = " << sqrt(Number) << endl;
	}


	return 0;
}

// Function declaration
double Square(double Number)
{
	double Square = Number * Number;

	return Square;
}

// Function declaration
double Cube(double Number)
{
	double Cube = Number * Number * Number;

	return Cube;
}
