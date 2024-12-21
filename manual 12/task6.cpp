#include<iostream>
using namespace std;
string check(string coordinate);
string battle[5][5]={
{".", ".", ".", "*", "*"},
{".", "*", ".", ".", "."},
{".", "*", ".", ".", "."},
{".", "*", ".", ".", "."},
{".", ".", "*", "*", "."}};
main()
{
    string coordinate;
    cout<<"    Enter the coordinates to fire torpedo (e.g A1, B3, E5): ";
    cin>> coordinate;
    string result=check(coordinate);
    cout<<"     Result: "<<result;
}
string check(string coordinate)
{
    int row = coordinate[0] - 'A';
    int col = coordinate[1] - '1';
    if (battle[row][col] == "*")
    {
        return "BOOM";
    }
    else if (battle[row][col] == ".")
    {
        return "splash";
    }
    else {
        return "Invalid Coordinate";
    }
}
