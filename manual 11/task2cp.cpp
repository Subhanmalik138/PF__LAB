#include <iostream>
using namespace std;


void fibonacciSeries(int n) 
{
    int a = 0, b = 1, next;

  
    if (n >= 1) {
        cout << a << " ";
    }
    
    if (n >= 2) {
        cout << b << " ";
    }

 
    for (int i = 3; i <= n; i++) {
        next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int length;

    cout << "Enter the length of Fibonacci series: ";
    cin >> length;

    
    if (length <= 0) {
        cout << "Please enter a positive integer." << endl;
    }
    else {
        
        fibonacciSeries(length);
    }

    return 0;
}
