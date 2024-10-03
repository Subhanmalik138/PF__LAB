#include<iostream>
using namespace std;
void sides(int);
int main()
{
	cout << "ENTER SIDE LENGHT : ";
	int side;
	cin >> side;
	sides(side);
}
void sides(int a)
{
	int b;
	b = 6 * a;
	int c;
	c = b * a;
	cout << c;
}