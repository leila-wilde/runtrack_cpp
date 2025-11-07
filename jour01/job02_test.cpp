// simple unit tests for job02.cpp 

#include <cassert> // for assert() function which checks conditions
#include <iostream>
#include <cmath> // for mathematical functions like fabs()

using namespace std;

// create a function to test the core multiplication logic from jobo2
double multiply(double a, double b) {
    return a * b;
}

// test cases
void runTests() {
    // error handling and exceptions
    try {
        cout << "running tests for job02 (multiplication function)..." << endl;

        // Test case 1: positive numbers
        // verify that multiplication of two positive numbers works correctly
        assert(multiply(4.0, 5.0) == 20.0);
        cout << "test case 1 passed!" << endl;

        // Test case 2: negative numbers
        // check that multiplication of two negative numbers gives a positive result
        assert(multiply(-4.0, -5.0) == 20.0);
        cout << "test case 2 passed!" << endl;
        
        // Test case 3: mixed signs
        // check that multiplication of a positive with a negative number gives a negative result
        assert(multiply(4.0, -5.0) == -20.0);
        cout << "test case 3 passed!" << endl;

        // Test case 4: multiplication by zero
        // check that multiplication of a number by zero returns zero
        assert(multiply(4.0, 0.0) == 0.0);
        cout << "test case 4 passed!" << endl;

        // Test case 5: identity property
        // check that multiplication of a number by one returns the same number
        assert(multiply(4.0, 1.0) == 4.0);
        cout << "test case 5 passed!" << endl;

        // Test case 6: communative check
        // check that multiplication is commutative: a * b == b * a
        assert(multiply(4.0, 5.0) == multiply(5.0, 4.0));
        cout << "test case 6 passed!" << endl;

        // Test case 7: large numbers
        // check mulitplication of large numbers to test possible numeric overflow issues
        assert(multiply(4000000000.0, 5000000000.0) == 20000000000000000000.0);
        cout << "test case 7 passed!" << endl;

        // Test case 8: very small numbers
        // check multiplication of very small numbers near to zero works correctly
        assert(multiply(1e-10, 1e-10) > 0);
        cout << "test case 8 passed!" << endl;

        // Test case 9: floating-point precision (<cmath>; fabs())
        // verify accurate representation of decimal multiplication with potential rounding errors
        assert(fabs(multiply(0.1, 0.2) - 0.02) < 1e-9);
        cout << "test case 9 passed!" << endl;

        // Test case 10: handling special values (infinity, NaN)
        assert(isinf(multiply(INFINITY, 5.0)));
        assert(isnan(multiply(NAN, 5.0)));
        cout << "test case 10 passed!" << endl;

    } catch (const exception& e) {
        cerr << "test failed: " << e.what() << endl;
        exit(1);
    }

    cout << "all tests passed!" << endl;
}

int main() {
    runTests();
    return 0;
}

