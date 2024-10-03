#include<iostream>
using namespace std;
void add(float, float);
void sub(float, float);

void divide(float, float);
void mul(float, float);
int main()
{
	cout << "**WELCOME TO BASIC CALCULATER FOR TWO DIGIT**" << endl;
	cout << "ENTER NUMBER 1 : ";
	float a;
	cin >> a;
	cout << "ENTER NUMBER 2 : ";
	float b;
	cin >> b;
	cout << "ENTER OPERATER +,-,*,/" << endl;

	char op;
	cin >> op;
	if (op == '+')
	{
		add(a, b);
	}
	if (op == '-')
	{
		sub(a, b);
	}
	 if (op == '*')
	{
		mul(a, b);
	}
	 if (op == '/')
	{
		divide(a, b);
	}
}

void add(float n1, float n2)
{
	cout<<"ADD : " << n1 + n2;
}
void sub(float n3, float n4)
{
	cout << "sub : " << n3 - n4;
}
void mul(float na, float nb)
{
	cout << "MUL : " << na * nb;
}
void divide(float ca, float cb)
{
	cout << "DIVIONS : " << ca / cb;
}