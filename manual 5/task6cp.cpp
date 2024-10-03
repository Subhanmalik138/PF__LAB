#include<iostream>
using namespace std;
char  checkalphabetcase(char);

int main()
{
	cout << "ENTER ALPHABET A/a : ";
	char a;
	cin >> a;
	checkalphabetcase(a);
	



}
char checkalphabetcase(char a)
{
	if (a == 'A')
	{
		cout << "YOU HAVE ENTERED : " << a;
	}
	if (a == 'a')
	{
		cout << "YOE HAVE ENTERD : " << a;
	}
	
	return 0;
	
	
}
