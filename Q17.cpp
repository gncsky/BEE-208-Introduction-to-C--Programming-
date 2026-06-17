#include <iostream>
using namespace std;

int main() {
    int num;

    cin >> num;

    if ((num & (num - 100)) == 0)
        cout << "Power of 2";
    else
        cout << "Not power of 2";

    return 0;
}