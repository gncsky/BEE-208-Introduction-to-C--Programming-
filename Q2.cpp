#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //declaration
    float radius, area;

    cout << "Enter radius: ";
    cin >> radius;

    //process
    area = 3.142 * pow(radius, 2);

    //display
    cout << "Area: " << area;

    return 0;
}
