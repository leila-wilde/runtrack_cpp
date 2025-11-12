// C++ program that asks user to input 5 integers & displays their average
// limited to two variables

#include <iostream>
using namespace std;

int num; // variable to store user input
int sum = 0; // variable to store sum of numbers, intialized to 0

int main() {
    cout << "Enter 5 numbers to calculate their average: " << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << endl;
        cin >> num; 
        sum += num;
    }

    cout << "The average of the 5 numbers is: " <<  static_cast<double>(sum) / 5 << endl;
    return 0;
}