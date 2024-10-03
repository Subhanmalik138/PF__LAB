#include<iostream>
using namespace std;
int main()
{
cout<<"ENTER THE NAME OF DAY"<<endl;
string name;
cin>>name;
cout<<"ENTER PURCHACES AMOUNT";
int a;
cin>>a;
if(name== "sunday")
{
  int b,c;
b= a* 10/100;
c=a - b;
cout<< "PAYABLE AMOUNT : "<<c;
}
else cout<<"PAYABLE AMOUNT : "<<a;


}
