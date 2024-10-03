#include<iostream>
using namespace std;
void sum();

int main()
{
	sum();

}

void sum()
{
	cout << "ENTER NUMBER 1 : ";
	int n1;
	cin >> n1;
	cout << "ENTER NUMBER 2 : ";
	int n2;
	cin >> n2;
	int add;
	add = n1 + n2;
	cout << "SUM OF NUMBERS IS : " << add;
}