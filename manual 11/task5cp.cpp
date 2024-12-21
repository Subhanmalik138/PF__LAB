#include <iostream>
#include <cmath>  

using namespace std;

int digitSum(int number) 
{
    number = abs(number);
    int sum = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        sum = sum + lastDigit;
        number = number / 10;
    }

    return sum;
}

   
int main() 
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "The sum of the digits of " << num << " is " << digitSum(num) << endl;

    return 0;
}
