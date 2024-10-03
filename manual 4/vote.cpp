#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER YOU NAME : ";
	string name;
	cin >> name;
	cout << "ENTER YOUR AGE : ";
	float age;
	cin >> age;

	if (age >= 18)cout << name << "  ARE ELGILBLE  FOR VOTE : ";
	if (age < 18)cout << name << " ARE NOT ELIGIBLE FOR VOTE : ";
}