
/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.*/


#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    char opp;
    double num1, num2;

   
    cout << "Enter first operand: ";
    cin >> num1;
    cout << "Enter an operation (+, -, *, /, ^ for exponentiation, s for square root): ";
    cin >> opp;

    switch (opp) {
        case '+':
            cout << "Enter second operand: ";
            cin >> num2;
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Enter second operand: ";
            cin >> num2;
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Enter second operand: ";
            cin >> num2;
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Enter second operand: ";
            cin >> num2;
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero is undefined." << endl;
            }
            break;
        case '^':
            cout << "Enter the exponent: ";
            cin >> num2;
            cout << num1 << " ^ " << num2 << " = " << pow(num1, num2) << endl;
            break;
        case 's':
            if (num1 >= 0) {
                cout << "Square root of " << num1 << " = " << sqrt(num1) << endl;
            } else {
                cout << "Error! Cannot calculate square root of a negative number." << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please enter +, -, *, /, ^, or s." << endl;
            break;
    }

    return 0;
}

//SAMPLE OUTPUT//

/*
Enter first operand: 12
Enter an operation (+, -, *, /, ^ for exponentiation, s for square root): +
Enter second operand: 12
12 + 12 = 24
Do you want to perform another calculation? (Y/N): Y
Enter first operand: 10
Enter an operation (+, -, *, /, ^ for exponentiation, s for square root): s
Square root of 10 = 3.16228
Do you want to perform another calculation? (Y/N): Y
Enter first operand: 10
Enter an operation (+, -, *, /, ^ for exponentiation, s for square root): ^
Enter the exponent: 2
10 ^ 2 = 100
*/
