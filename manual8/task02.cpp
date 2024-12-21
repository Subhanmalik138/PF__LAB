#include <iostream>
using namespace std;
//Header
float effectivenessofAttack(string ,string);
float calculateDamage(float,float);
main()
{
    //Declaration
    float yourDamage,enemyDefence,damgedealed,effectiveness,result;
    string yourType,enemyType;
    //Inputs for types
    cout<<"Enter your type of attack (fire/water/grass/electric): ";
    cin>>yourType;
    cout<<"Enter enemy's type of attack(fire/water/grass/electric): ";
    cin>>enemyType;
    //Input for attack
    cout<<"Enter your damage: ";
    cin>>yourDamage;
    cout<<"Enter opponent's defence: ";
    cin>>enemyDefence;
    //calling values from funcion
    damgedealed=calculateDamage( yourDamage, enemyDefence);
    effectiveness=effectivenessofAttack( yourType, enemyType);
    //Output
    result=damgedealed*effectiveness;
    cout<<result;
}
float calculateDamage(float yourDamage,float enemyDefence)
{
    //Declaration
    float damageGiven;
    //Processing
    damageGiven=50*(yourDamage/enemyDefence);
    return damageGiven;
}
float effectivenessofAttack(string yourType,string enemyType)
{
    //Declaration
    float conclusion;
    if (yourType==enemyType)
    {
        conclusion=1.0;
    }
    //When user's type is fire
    else if (yourType=="fire")
    {
        if (enemyType=="water")
        {
            conclusion=0.5;
        }
        else if (enemyType=="grass")
        {
            conclusion=2.0;
        }
        else if (enemyType=="electric")
        {
            conclusion=1.0;
        }
    }
    //When user's type is water
    else if (yourType=="water")
    {
        if (enemyType=="fire")
        {
            conclusion=2.0;
        }
        else if (enemyType=="grass")
                {
            conclusion=0.5;
        }
        else if (enemyType=="electric")
        {
            conclusion=0.5;
        }
    }
    //When user's type is grass
    else if (yourType=="grass")
    {
        if (enemyType=="fire")
        {
            conclusion=0.5;
        }
        else if (enemyType=="water")
        {
            conclusion=2.0;
        }
        else if (enemyType=="electric")
        {
            conclusion=1.0;
        }
    }
    //When user's type is electric
    else if (yourType=="electric")
    {
        if (enemyType=="fire")
        {
            conclusion=1.0;
        }
        else if (enemyType=="water")
        {
            conclusion=2.0;
        }
        else if (enemyType=="grass")
        {
            conclusion=1.0;
        }
    }
    return conclusion;
}