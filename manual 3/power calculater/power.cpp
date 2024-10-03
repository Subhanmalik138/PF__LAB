#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		cout << "ENTER THE VALUE OF VOLTAGE(V):" << endl;
		float a;
		cin >> a;
		cout << "ENTER THE VALUE OF CURRENT:" << endl;
		float b;
		cin >> b;
		float c;
		c = a * b;
		cout << "THE POWER IS  " << c << " watts" << endl << "++++++++++++++++++++++++++++++++" << endl;
	}
}