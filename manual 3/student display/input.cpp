#include<iostream>
using namespace std;
int main()
{
	while (true)
	{
		string name;
		cout << "ENTER YOUR NAME:" << endl;
		cin >> name;
		string roll;
		cout << "ENTER YOUR ROLL NUMBER:" << endl;
		cin >> roll;
		string a;
		cout << "ENTER YOUR AGGREGGATE:"<<endl;
		cin >> a;
		string section;
		cout << "ENTER YOUR SECTION:" << endl;
		cin >> section;
		cout<<"STUDENT INFORMATION"<<endl;
                cout << "YOUR NAME IS:" << name << endl << "YOUR ROLL NUMBER IS:" << roll << endl << "YOUR AGGRREGATE IS:" << a << endl << "YOUR SECTION IS:" << section<<endl<<"============================"<<endl;
	}
}