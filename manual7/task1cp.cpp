#include<iostream>
using namespace std;

int main()
{
	cout << "ENTER NUMBER :";
	int number;
	cin >> number;
	int total;
	for(int j=1;j<11;j++)
	{
		total = number * j;
		cout << number << "*" << j << "=" << total<<endl;
		

	}


}