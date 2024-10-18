#include<iostream>
using namespace std;


int main()
{
	int number = 0, sum = 0;

	while (number >= 0)
	{
		sum = sum + number;
		cout << "ENTER NUMBER : " << endl;
		cin >> number;
	}
	cout << "sum :"<<sum ;


}