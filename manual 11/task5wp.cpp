#include<iostream>
using namespace std;

int add();
int main()
{
	int total=add();

	cout << "SUM IS : " << total;

}
int add()
{
	int sum = 0;
	for (int i = 0; i <=100; i++)
	{
		sum = sum + i;

	}
	return sum;
}