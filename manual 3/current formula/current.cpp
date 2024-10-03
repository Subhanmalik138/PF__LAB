#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		cout << "ENTER THE VALUE OF CHARGES(Q) in COLUMBS:" << endl;
		float a;
		cin >> a;
		cout << "ENTER THE VALUE OF TIME(T) in SECONDs" << endl;
		float b;
		cin >> b;
		float c;
		c = a / b;
		cout << "THE VALUE OF CURRENT IS :" << c << "  A"<<endl<<"++++++++++++++++++++++++++++++"<<endl;
	}

}