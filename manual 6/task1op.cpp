#include<iostream>

using namespace std;
string check(int number1, int number2);

int main()
{
	cout << "ENTER NUMBER 1 :";
		int number1;
		cin >> number1;
		cout << "ENTER NUMBER 2 : ";
		int number2;
		cin >> number2;
		string result = check(number1, number2);
		cout << result;

}
string check(int number1, int number2)
{
	string result;
	if (number1 > number2)
	{
		result = "true";
	}
	else result = "false";
	return result;


}