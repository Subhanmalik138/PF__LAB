#include<iostream>
using namespace std;
main()
{ 
cout<<"ENTER CURRENT POPULATION:";
int a;
cin>>a;
cout<<"ENTER THE POPULATION RATE PER MONTH:";
int b;
cin>> b;
int c;
c= b*360;
int d;
d= a + c;
cout<<"THE POPULATION IN THREE DECADES IS:"<<d<<endl;
}  

