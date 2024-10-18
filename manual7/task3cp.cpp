#include <iostream>
#include <cmath> 
using namespace std;

int totalDigits(int number) {
   
    number = abs(number);

    if (number == 0) return 1;

    int digits = 0;
    while (number > 0) {
        number /= 10;  
        digits++;      
    }
    return digits;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Total number of digits: " << totalDigits(num) << endl;

    return 0;
}
