#include<iostream>
using namespace std;
int main()
{
	cout << "ENTER INTEGER : ";
	int n;
	cin >> n;
	if (n % 2 == 0)cout << n << " IS EVEN NUMBER";
	else cout << n<<" IS ODD";
}