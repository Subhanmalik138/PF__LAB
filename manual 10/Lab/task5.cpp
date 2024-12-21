#include<iostream>
using namespace std;
main()
{
    int n,total=0;
    cout<<"  Enter the number of boxes: ";
    cin>> n;
    if(n==0)
    {
        cout<<"   Please enter number greater than 0..."<<endl;
    }
    int m=3*n;
    int boxes[m];
    for(int i=0; i<m;i++)
    {
        cin>> boxes[i];
    }
    for(int i=0; i<m;i=i+3)
    {
        int length=boxes[i];
        int width=boxes[i+1];
        int height=boxes[i+2];
        int volume=length*width*height;
        total=total+volume;
    }
    cout<<"  Total Volume: "<<total;
}
