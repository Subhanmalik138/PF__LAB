#include<iostream>

#include<string>
using namespace std;

string check(float speed);
int main()
{
	cout << "ENTER SPEED";
	float speed;
	cin >> speed;
	string result = check(speed);
	cout << result;


}
string check(float speed)
{
	string result;
	if (speed > 0 && speed <= 10)
	{
		result = "slow";
	}
	if (speed > 10 && speed <= 50)
	{
		result = "average";
	}
	if (speed > 50 && speed <= 150)
	{
		result = "FAST";
	}
	if (speed > 150)
	{
		result = "ULTRA FAST";
	}
	return result;
}