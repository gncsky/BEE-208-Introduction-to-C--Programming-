#include <iostream>
using namespace std;

int main() {
    //declaration
    int num1, num2, sum, diff, prod;
    float quot;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    //process
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = (float)num1 / num2;

    //display
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Quotient: " << quot;

    return 0;
}
