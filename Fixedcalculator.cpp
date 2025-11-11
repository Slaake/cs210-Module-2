/*
 * Calculator.cpp
 *
 *  Date: 11/07/2025
 *  Author: Shirl Lakeway
 */

#include <iostream>

using namespace std;

int main() // replaced with void with int
{
    // char statement[100]; // Commented out this variable as it is not needed to run
    int op1, op2;
    char operation;
    char answer = 'Y';                         // Added missing ; at the end of the statement and change " to '
    while ((answer == 'y') || (answer == 'Y')) // Updated formatting to best pratices
    {
        // Added inputs and outputs for entering operation and numbers
        cout << "Enter expression" << endl;
        cin >> operation;

        cout << "Enter First number" << endl;
        cin >> op1;
        cout << "Enter Second number" << endl;
        cin >> op2;

        if (operation == '+') // Updated " to ' and added missing brackets
        {
            cout << op1 << " + " << op2 << " = " << op1 + op2 << endl; // Updated >> to <<
        }
        else if (operation == '-')
        {
            cout << op1 << " - " << op2 << " = " << op1 - op2 << endl; // Updated >> to << and added missing brackets
        }
        else if (operation == '*') // Added missing brackets
        {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl; // Added missing ; and change / to *
        }
        else if (operation == '/') // Added missing brackets
        {
            cout << op1 << " / " << op2 << " = " << op1 / op2 << endl; // change * to /
        }
        else
        {
            cout << "Please enter a valid character of + - / *" << endl; // Added this to let the user know if operation is not a vaild choice
        }

        cout << "Do you wish to evaluate another expression? " << endl;
        cin >> answer;
    }
    cout << "Program Finished." << endl; // Added the terminiating output requirement after the while loop

    return 0; // Added missing return statement
}
