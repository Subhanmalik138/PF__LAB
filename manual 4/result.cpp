#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER YOUR MARKS : ";
	float marks;
	cin >> marks;
	if (marks > 50)cout << "YOUR ARE PASS";
	if (marks < 51)cout << "YOUR ARE FAIL";
}