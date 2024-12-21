#include <iostream>

using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);


int main() 
{
    int num1, num2;

    
    cout << "Enter  number 1: ";
    cin >> num1 ;
    cout << "Enter  number 2: ";
    cin >> num2;

    
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}
int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}
