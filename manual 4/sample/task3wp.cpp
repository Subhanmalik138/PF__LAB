#include<iostream>
using namespace std;
void sum(int, int);
int main()
{
	sum(4, 5);
}
void sum(int a, int b)
{
	int add;
	add = a + b;
	cout << "SUM OF NUMBERS IS : " << add;
}