#include<iostream>
using namespace std;
void check(int hours, int min);
int main()
{
	cout << "ENTER HOURS BETWEEN 1-23 : ";
	int hours;
	cin >> hours;
	cout << "ENTER MINS 1-59 : ";
	int min;
	cin >> min;
	int increase;
	increase = min + 15;
	check(hours, increase);

}
void check(int hours, int min)
{
	if (min > 0 && min < 59)
	{
		cout << hours << ":" << min;
	}
	if (hours > 24)
	{
		int gs;
		gs = hours - 24;
	}
	if(min>59  && hours<24)
	{
		int increase;
		increase = hours + 1;
		int fs;
		fs = min - 59;
		cout << increase << ":" << fs;
	}
}