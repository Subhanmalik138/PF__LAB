#include<iostream>
using namespace std;
string canbuy(float cost, string brand);


int main()
{
	cout << "ENTER COST OF DRESS : ";
	float cost;
	cin >> cost;
	cout << "ENTER BRAND NAME : ";
	string brand;
	cin >> brand;
	cout << canbuy(cost, brand);
}
string canbuy(float cost, string brand)
{
	string result = "SORRY! YOU CANNOT BUY ";
	if (cost < 1500 )
	{
		if (brand == "mtj")

		{
			result = "YOU CAN PURHCASE !";
		}
	}
	
	return result;


	
}