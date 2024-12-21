#include <iostream>
#include <cmath>  

using namespace std;

int frequencyChecker(int number, int digit) {
    number = abs(number);  
    int count = 0;

    while (number > 0) {
        int lastDigit = number % 10;  
        if (lastDigit == digit) {
            count++;  
        }
        number /= 10;  
    }

    return count;
}

int main() {
    int num, dig;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the digit you want to check the frequency of: ";
    cin >> dig;

    cout << "The digit " << dig << " occurs " << frequencyChecker(num, dig) << " times in the number " << num << endl;

    return 0;
}
