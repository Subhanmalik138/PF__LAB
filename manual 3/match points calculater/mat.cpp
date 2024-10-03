#include<iostream>
using namespace std;
main()
{
	while(true)
        {
        cout << "WELCOME TO ASIA CIRCKET TOURNAMENT"<<endl<<"ENTER THE NAME OF TEAM::";
	string name;
	cin >> name;
	cout << "ENTER THE NUMBER OF MATCHES YOU WON::" << endl;
	int a;
	cin >> a;
	int b;
	b = a * 3;
	cout << "ENTER THE NUMBERS OF DRAW MATCHES::" << endl;
	int m;
	cin >> m;
	int j;
	j = m * 1;
	cout<<"ENTER THE NUMBERS OF MATCHES THAT YOU LOSE::"<<endl;
        int d;
        cin>>d;
        int l;
        l=d*0;
       int g;
       g= b+j+l;
       cout<<name<<endl<<"TEAM HAS OBTAINED  "<<g<<"POINTS"<<endl;
        }
}

