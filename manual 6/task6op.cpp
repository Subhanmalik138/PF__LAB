#include <iostream>
using namespace std;

int main() {
    // Declare three variables to hold the input numbers
    int num1, num2, num3;

    // Prompt the user to enter the three numbers
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    // Check if all three numbers are the same
    if (num1 == num2 && num2 == num3) {
        cout << "Yes, all numbers are the same." << endl;
    }
    else {
        cout << "No, the numbers are not the same." << endl;
    }

    return 0;
}