#include <iostream>
#include <cmath>
using namespace std;
//Header
float pileCubes(float);
main()
{
    //Declaration
    float volume,blocks;
    //Input
    cout<<"Enter the volume of building: ";
    cin>>volume;
    //Output
    blocks=pileCubes(volume);
    cout<<blocks;
}
float pileCubes(float volume)
{
    //Declaration
    float cubesNeeded=0;
    for(float i=1;i*i*i<=volume;i++)//Using i^3 according to statement
    {
        cubesNeeded=cubesNeeded+pow(i,3);
        if (cubesNeeded==volume)
        {
            return i;
        }
    }
    return -1;    
}