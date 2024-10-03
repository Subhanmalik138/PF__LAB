#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "ENTER BASE NUMBER 1 : ";
	
		float n1;
		cin >> n1;
		cout << "ENTER EXPONENT NUMBER 2 : ";
		float n2;
		cin >> n2;
		cout << n1 << "  RAISED TO POWER  " << n2 << " IS :" << pow(n1, n2);
}