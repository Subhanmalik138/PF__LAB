#include<iostream>
using namespace std;
void fuel(float);
int main()
{
	cout << "ENTER THE DISTANCE";
	float distance;
	cin >> distance;
	fuel(distance);
}
void fuel( float a)
{
	float b;
	b = 10 * a;
        int c=100;
        if (b<100)cout<<c;
	if(b>=100)cout << "FUEL NEEDED IS : " << b;
       
}