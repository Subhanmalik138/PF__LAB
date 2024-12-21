#include <iostream>
using namespace std;
//Header 
bool isPrime (int);
main()
{
    //Declaration
    int number,result,counter=0;
    bool prime;
    //Input
    cout<<"Enter a number: ";
    cin>>number;
    //Output
    for(int i=2; i<=number ;i++)
    {
        prime=isPrime(i);
        if (prime==true)
        {
            counter++;
            result=i;
            cout<<result<<",";

        }
    }
    cout<<endl;
    cout<<"Total Primes: "<<counter;

}
bool isPrime(int number)
{
    //Decalration
    bool prime=true;
    //Checking prime
    for (int i=2; i*i<= number; i++)
    {
        if(number%i==0)
        {
            prime= false;
        }
    }
    return prime;
}