/*
 * Calculator.cpp
 *
 *  Date: 11/4/2025
 *  Author: Shirl Lakeway
 */

#include <iostream>

using namespace std;

int main() //replaced with void with int
{
	char statement[100];
	int op1, op2;
	char operation;
	char answer = 'y'; // Added missing ; at the end of the statement and change " to ' and changed to lowercase y
	while (answer == 'y') // Updated formatting to best pratices
	{
		// Added inputs and outputs for entering operation and numbers
		cout << "Enter expression" << endl;
		cin >> operation;
		cout << "Enter First number" << endl;
		cin >> op1;
		cout << "Enter Second number" << endl;
		cin >> op2;

		if (operation == '+') { //Updated " to ' and added missing brackets
			cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; //Updated >> to <<
        }
		else if (operation == '-'){
			cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; //Updated >> to << and added missing brackets
        }
		else if (operation == '*'){ //Added missing brackets
			cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; //Added missing ; and change / to *
        }
		else if (operation == '/'){ //Added missing brackets
			cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // change * to /
        }
        
		cout << "Do you wish to evaluate another expression? " << endl;
		cin >> answer;
	}
    return 0; //Added missing return statement
}

