// C++ program to calculate the volume of a sphere
#include <iostream>
#define PI 3.14159265

using namespace std;
int main()
{
    // input the radius
    float r;
    cout<<"Enter the radius of the sphere: ";
    cin>>r;
  
    // calculate and display the volume
    float res = 4 * PI * r * r * r / 3;
    cout<<"The volume of the given sphere is: "<<res<<" meters cubed.\n";
    return 0;
}

// example
/*
    input:
    Enter the radius of the sphere: 5
    output:
    The volume of the given sphere is: 523.599 meters cubed.
*/
