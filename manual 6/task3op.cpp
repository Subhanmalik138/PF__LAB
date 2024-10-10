#include<iostream>
using namespace std;
void square(float number);
void circle(float number);
void triangle(float number);
void hexagonal(float number);

int main()
{
	cout << "ENTER THE SHAPE (SQURE s,CIRCLE c;TRIANGLE t,HEXAGONAL h) : ";
	char input;
	cin >> input;
	cout << "ENTER VALUE : ";
	float number;
	cin >> number;
	if (input == 's')
	{
		square(number);
	}
	if (input == 'c')
	{
		circle(number);
	}
	if (input == 't')
	{
		triangle(number);
	}
	if (input == 'h')
	{
		hexagonal(number);
	}
}
void square ( float number)
{
	float rsult;
	rsult = number * 4;
	cout << "PERIMETER WILL BE : " << rsult;
}
void circle(float number)
{
	float reuslt;
	reuslt = 2 * number * 3.14;
	cout << "PERIMETER WILL BE : " << reuslt;
}
void triangle(float number)
{
	float rsult;
	rsult = number * 3;
	cout << "PERIMETRE WILL BE : " << rsult;
}
void hexagonal(float number)
{
	float result;
	result = 6 * number;
	cout << "PREITMER WILL BE : " << result;
}