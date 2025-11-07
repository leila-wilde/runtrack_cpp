// C++ program to multiply two numbers and display their product

#include <iostream>
using namespace std;

int main() {
    // declare variables to store two numbers
    double num1, num2;

    // prompt user for first number
    cout << "Enter the first number: ";
    cin >> num1;

    // prompt the user for second number
    cout << "Enter the second number: ";
    cin >>num2;

    // calculate the multiplication product
    double product = num1 * num2;

    // display the result
    cout << num1 << " * " << num2 << " = " << product << endl;

    // return 0 to indicate program executed sucessfully
    return 0;
}