#include<iostream>
using namespace std;


void add(int, int);
int main()

{
	cout << "ENTER THE NUMBER 1 : ";
	int a;
	cin >> a;
	cout << "ENTER NUMBER 2 : ";
	int b;
	cin >> b;
	add(a, b);

  
}
void add(int x, int y)
{
	int sum = x + y;
	cout << "SUM OF TWO NUMBERS IS : "<<sum;
}