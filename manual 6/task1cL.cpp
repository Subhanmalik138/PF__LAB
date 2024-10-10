#include<iostream>
#include<cmath>


using namespace std;
void check(float, float, float);


int main()
{
	cout << "ENTER NUMEBR 1 : ";
	float numebr1;
	cin >> numebr1;
	cout << "ENTER NUMBER 2 : ";
	float number2;
	cin >> number2;
	cout << "ENTER NUMEBR 3 : ";
	float munber3;
	cin >> munber3;
	check(numebr1, number2, munber3);

}
void check(float n1, float n2, float n3)
{
	int max1 = max(n1, n2);
	int max2 = max(n2, n3);
	int totalmax = max(max1, max2);
	cout << totalmax;
	
	
}