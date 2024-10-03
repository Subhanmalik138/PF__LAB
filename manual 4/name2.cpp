#include<iostream>
using namespace std;

void name();
int main()
{
	while (true)
	{
		name();
	}
}
void name()
{
	cout << "ENTER YOUR NAME : ";
	string a;
	cin >> a;
	cout << "YOUR NAME IS  " << a<<endl;


}
