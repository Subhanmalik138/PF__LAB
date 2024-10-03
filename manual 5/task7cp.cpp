#include<iostream>
using namespace std;
int check(int a);

int main()
{
	cout << "ENTER fIVE DIGiT Number ";
	int a;
	cin >> a;
	int result;
	result = check(a);
	int sum;
	sum = result % 2;
	if (sum == 1)
	{
		cout << "oddiesh : " << result;

	}
	if (sum == 0)
	{
		cout << "EVENISH : " << result;
	}

	
}
int check(int a)
{
	int sum = 0;

	int digit;
	digit = a % 10;
	sum = sum + digit;
	a = a / 10;
	digit = a % 10;
	sum = sum + digit;
	a = a / 10;
	digit = a % 10;
	sum = sum + digit;
	a = a / 10;
	digit = a % 10;
	sum = sum + digit;
	a = a / 10;
	sum = a+ sum;
	return sum;
}