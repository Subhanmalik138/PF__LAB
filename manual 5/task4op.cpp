#include<iostream>
int funtion(int a);

using namespace std;

int main()
{ 
	cout << "ENTRE NUMBER : ";
	int number;
	cin >> number;
	int conse;
	conse = funtion(number);
	cout << conse;
	return 0;


}
int funtion(int a)
{
	int reult = a * 5;
	return reult;
}
