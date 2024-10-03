#include<iostream>
using namespace std;
main()
{ 
cout<<"ENTER YOUR NAME:";
string name;
cin>> name;
cout<<"ENTER YOUR MATRIC MARKS:";
int a;
cin>> a;
cout<<"ENTER YOUR FSC MARKS:";
int b;
cin>> b;
cout<< "ENTER YOUR ECAT MARKS:";
int c;
cin>>c;
float d;
d = a*0.0090 + b*0.07272 +c*0.125;
cout<<"AGGREAGATE SCORE FOR "<<name<<" IN UET LAHORE IS:" <<d<<"%"  ;

}