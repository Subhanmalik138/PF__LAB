#include<iostream>
#include<string>
using namespace std;
string check(int number);
int main()
{
	cout << "ENTER  THREE  DIGITS : ";
	int number;
	cin >> number;
	
	string result=check(number);
	cout << result;
}









string check(int number)
{
	int n1 = 0, n2 = 0, n3 = 0;
	int digit;
	digit = number % 10;
	n3 = n3 + digit;
	number = number / 10;
	digit = number % 10;
	n2 = n2 + digit;
	number=number / 10;
	n1 = n1 + number;




	int sum = n1 + n2 + n3;
	//for even;
	int evennumber;
	evennumber = number % 2;
	int even;
	even = sum % 2;
	//for odd;
	int oddnumebr;
	oddnumebr = number % 2;
	int odd;
	odd = sum % 2;
	
	string result="false";
	if (evennumber == 0 && even == 0)
	{
		result = "true";
	}
	if (oddnumebr == 1 && odd == 1)
	{
		result = "true";
	}
	return result;

}