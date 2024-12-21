#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"  How many elements you want to enter: ";
    cin>> n;
    int elements[n];
    for(int i=0; i<n; i++)
    {
        cin>> elements[i];
    }
    bool found=false;
    for(int i=1;i<n-1;i++)
    {
        if(elements[i]>elements[i-1] && elements[i]>elements[i+1])
        {
            cout<<" Output: "<<elements[i]<<endl;
            found=true;
        }
    }
    if(!found)
    {
        cout<<"   No Peak Found!"<<endl;
    }
}