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
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<rowsize; j++)
        {
            cout<<elements[i][j]<<"\t";
        }
        cout<<endl;
    }
 int count = 0;
 for (int idx = 0; idx < rowsize; idx = idx + 1){
 if (elements[idx][idx] == 1){
 count = count + 1;
 }
 }
 if (count == rowsize){
 cout<<"   The enetred matrix is identity."<<endl;
 }
 else{
    cout<<"   The enetred matrix is not identity."<<endl;
 }
}