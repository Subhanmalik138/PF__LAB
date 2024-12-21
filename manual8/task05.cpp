#include <iostream>
using namespace std;
//Header
int check1inBinary(int);
string howBad(int);
bool isprime(int);
main()
{
    //Declaration
    int number;
    string result;
    //Input
    cout<<"Enter a number: ";
    cin>>number;  
    //Output
    result=howBad(number);
    cout<<result;
}
int check1inBinary (int number)
{
    //Declaration
    int remainingnumber;
    int counter=0;
    //Checking 1 in binary form of number
    while(number>0)
    {
        remainingnumber=number%2;
        number=number/2;
        if (remainingnumber==1)
        {
            counter++;
        }
    }
    return counter;
}
string howBad(int number)
{
    //Declaration
    int sumof1;
    string numberType;
    bool checkPrime;
    sumof1=check1inBinary(number);
    //Processing 

    if (sumof1%2==0)
    {
        numberType="Evil";
    }
    else
    {
        numberType="Odious";
    }
    //Checking for prime
    checkPrime=isprime(sumof1);
    if (checkPrime ==true)
    {
        numberType=numberType+", Pernicious";
    }
    return numberType;
}
bool isprime(int sumof1)
{
    for(int i=2;i*i<=sumof1;i++)
    {
        if(sumof1%i==0)
        {
            return false;
        }        
    }
    if (sumof1<2)
    {
        return false;
    }
    return true;
    
}