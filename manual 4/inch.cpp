#include<iostream>
using namespace std;
void feet(float);
int main()
{
	cout << "ENTER INCHES : ";
	float inc;
	cin >> inc;
	feet(inc);
}
void feet(float a)
{
	float c;
	c = a / 12;
	cout << "feet is : " << c;

}