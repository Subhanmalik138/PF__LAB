#include<iostream>
using namespace std;
int count=0;
main()
{
    int n;
    cout<<"  Enter number of Saturdays: ";
    cin>> n;
    int miles[n];
    cout<<"  Enter the number of miles: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>> miles[i];
    }
    for(int i=1;i<n;i++)
    {
        if(miles[i]>miles[i-1])
        {
            count++;
        }
    }
    cout<<"  Progress days: "<<count;
}