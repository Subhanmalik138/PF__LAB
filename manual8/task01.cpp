#include <iostream>
using namespace std;
//Header
bool doesBrickFit(int,int,int,int,int);
main()
{
    //Declaration
    int brickHeight,brickWidth,brickDepth,holeWidth,holeHeight;
    bool result;
    //Inputs for dimension of brick
    cout<<"Enter the height of brick: ";
    cin>>brickHeight;
    cout<<"Enter the width of brick: ";
    cin>>brickWidth;
    cout<<"Enter the depth of brick: ";
    cin>>brickDepth;
    //Input for dimension of hole
    cout<<"Enter the height of hole: ";
    cin>>holeHeight;
    cout<<"Enter the width of hole: ";
    cin>>holeWidth;        
    //Output
    result=doesBrickFit( brickHeight, brickWidth, brickDepth, holeHeight, holeWidth);
    cout<<result;
}
bool doesBrickFit(int brickHeight,int brickWidth,int brickDepth,int holeHeight,int holeWidth)
{
    //Declaration
    int holeArea=holeHeight*holeWidth;
    int brickAreaNormally=brickHeight*brickWidth;
    int brickAreaSideways=brickHeight*brickDepth;
    if ((brickAreaNormally==holeArea) ||(brickAreaSideways==holeArea) )   //Brick fits
    {
        return true;
    }
    return false;//Brick does not fit

}
