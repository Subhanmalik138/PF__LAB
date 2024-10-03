#include<iostream>
#include<cmath>
using namespace std;
void case1(double descriminent, double a, double b);


int main()
{
	cout << "ENTER VALUE OF a : ";
	double a;
	cin >> a;
	cout << "ENTER VALUE OF b : ";
	double b;
	cin >> b;
	cout << "ENTER VALUE OF c";
	double c;
	cin >> c;
	double descrimint;
	descrimint =( (b*b) - (4 * a * b));
	cout << descrimint;
	case1(descrimint, a, b);
}
void case1(double descriminent, double a, double b)
{
	double root1, root2;
	if (descriminent > 0)
	{
		root1 = (-b + (sqrt(descriminent))) / 2 * a;
		root2 = (-b + (sqrt(descriminent))) / 2 * a;
		cout << "complex solution is x1 = " << root1 << "   x2  = " << root2;
		
	}
	if (descriminent == 0)
	{
		root1 = -b / 2 * a;
		cout << "SOLUTION IS : "<< root1;
	}
	if (descriminent < 0)
	{
		double real, imaginary;
		real= -b / 2 * a;
		imaginary = descriminent / 2 * a;
		cout << "REAL IS : " << real << "IMAGInRY NUMBER IS : " << imaginary << "i";
	}

}
	
	