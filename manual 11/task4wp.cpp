#include<iostream>
using namespace std;

int sum();
int main()
{
	int total = sum();
	cout << total;
}

int sum()
{
	int sum = 0;
	for (int i = 0; i <=5; i++)
	{
		sum = sum + i;

	}
	return sum;
}