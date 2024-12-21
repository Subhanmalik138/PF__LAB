#include<iostream>
using namespace std;
main()
{
    int rowsize;
    cout<<"   Enter the rowsize: ";
    cin>> rowsize;
    int col=rowsize;
    cout<<"   Enter the elements of matrix:"<<endl;
    int elements[rowsize][col];
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<rowsize; j++)
        {
            cout<<"   Enter element at position "<<i<<" "<<j<<" : ";
            cin>> elements[i][j];
        }
    }
    int total=0;
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<rowsize; j++)
        {
            total=total+elements[i][j];
        }
    }
    cout<<total;
}
