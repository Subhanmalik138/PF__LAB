#include <iostream>
using namespace std;
//Header
string printFlowers(string,int);
string printBranch(string ,int ,int,int );
main()
{
    //Declaration 
    string seed="",plant="";
    int water,fertilizer,temperature;
    //Input
    cout<<"Enter seed type: ";
    cin>>seed;
    cout<<"Enter units of water: ";
    cin>>water;
    cout<<"Enter units of fertilizers: ";
    cin>>fertilizer;
    cout<<"Enter the temperature provided to the plant: ";
    cin>>temperature;
    //Output
    plant=printBranch(seed,water,fertilizer,temperature);
    cout<<plant;

}
string printFlowers(string seed,int fertilizer)
{
    //Declaration
    string floweret="";
    //Printing flowers
    for (int i=1;i<=fertilizer;i++)
    {
        floweret=floweret+seed;
    }
    return floweret;
}
string printBranch(string seed,int water,int fertilizer,int temperature)
{
    //Declaration
    string stem="",branch="",flower="";
    //Calling of function
    flower=printFlowers(seed,fertilizer);
    if (temperature>=20 && temperature<=30)//When temp is between 20 and 30
    {
        for (int x=1; x<=water; x++)//Printing stem
        {
            stem=stem+"-";
        }
        for (int x=1; x<=water; x++)//Printing branch
        {
            branch=branch+stem+flower;
        }
    }
    else//when temp is not between 20 and 30  
    {
        for (int x=1; x<=water; x++)//Printing stem
        {
            stem=stem+"-";
        }
        for (int x=1; x<=water; x++)//Printing branch
        {
            branch=branch+stem;
        }
        branch=branch+seed;

    }
    return branch;     
}