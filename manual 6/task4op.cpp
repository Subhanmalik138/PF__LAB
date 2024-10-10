#include<iostream>
using namespace std;
void check(string day, string month, float amount);

int main()
{
	cout << "ENTER DAY:  ";
	string day;
	cin >> day;
	cout << "ENTER MONTH : ";
	string month;
	cin >> month;
	cout << "ENTER PURCHASE AMOUNT : ";
	float amount;
	cin >> amount;
	check(day, month, amount);


}
void check(string day, string month, float amount)
{
	float total;

	if (day == "sunday" && month == "october")
	{
		float discount = amount - (amount * 0.1);
		total = discount;
		cout << "TOTAL PAYABLE AMOUNT IS : " << total;
		

	}
	else if (day == "sunday" && month!="october")
	{
		float discount = amount - (amount * 0.05);
		total = discount;
		cout << "TOTAL PAYABLE AMOUNT IS : " << total;
	}
	if (day != "sunday" && month != "october")
	{
		cout << "payable amount is: ";
	}

}