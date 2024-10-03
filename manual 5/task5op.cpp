#include<iostream>
#include<cmath>
using namespace std;
void loop(float a, float b);
int main()
{
	cout << "ENTER VALUE OF HORIZONTAL DISTANCE (feet)  :";
	float distance;
	cin >> distance;
	cout << "ENTER ANGLE IN DEGREE : ";
	float degree;
	cin >> degree;
	loop(distance, degree);

}
void loop(float a,float b)
{
	float radien;
	radien = b/57.2958;
	float result;
	result = a * tan(radien);
	cout <<"HEIGHT OG TREE IS : " << result<< "FEET";
}