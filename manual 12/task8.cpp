#include<iostream>
using namespace std;
void larger(int elements[5][5], int rowsize);
int Sum(int elements[5][5], int rowsize,int colIndex);
main()
{
        int rowsize;
    cout<<"   Enter the rowsize: ";
    cin>> rowsize;
    if(rowsize<=5 && rowsize>=1)
    {
    cout<<"   Enter the elements of matrix:"<<endl;
    int elements[5][5];
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<"   Enter element at position "<<i<<" "<<j<<" : ";
            cin>> elements[i][j];
        }
    }
    cout<<"    Original Matrix: "<<endl;
    for(int i=0; i<rowsize; i++)
    {
        for(int j=0; j<5; j++)
        {
            cout<<elements[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"    Matrix after largest colum move to first: "<<endl;
    larger(elements, rowsize);
    for (int i = 0; i < rowsize; i++)
    {
            for (int j = 0; j < rowsize; j++)
            {
                cout << elements[i][j] << " ";
            }
            cout << endl;
    }
    }
    else{
        cout<<"    Please enter number between 1-5....."<<endl;
    }
}
void larger(int elements[5][5], int rowsize)
{
    int largestSum = -1;
    int largestColIndex = -1;
    for(int col = 0; col < rowsize; col++) {
        int colSum = Sum(elements, rowsize,col);
        if(colSum > largestSum) {
            largestSum = colSum;
            largestColIndex = col;
        }
    }
      if(largestColIndex != -1) {
        for(int i = 0; i < rowsize; i++)
        {
            int temp = elements[i][0];
            elements[i][0] = elements[i][largestColIndex];
            elements[i][largestColIndex] = temp;
        }
    }
}
int Sum(int elements[5][5], int rowsize, int colIndex)
{
    int sum=0;
        for(int i=0; i<rowsize; i++)
        {
            sum=sum+elements[i][colIndex];
        }
    return sum;
}