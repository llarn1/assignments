// cpp program to calculate the area of a circle.
#include <iostream>
using namespace std;
#define pi 3.14159265
int main ()
{
    // take input
    float radius;
    cout<<"Enter the radius: ";
    cin>>radius;

    // print the area
    cout<<"The Area Of This Circle Is: "<<pi * radius * radius<<" metar squared."<<endl;
    return 0;
}
