#include<iostream>
using namespace std;
float payablbe(float amount);

int main()
{
	cout << "ENTER DAY : ";
	string day;
	cin >> day;
	cout << "ENTER MONTH : ";
	string month;
	cin >> month;
	cout << "ENTER PRICE OF ITEM : ";
	float amount;
	cin >> amount;
	float total = payablbe(amount);
	cout << "Total payable amont is : " << total;



}
float payablbe(float amount)
{
	float discount = amount - (amount * 0.1);
	return discount;

}