// C++ program to calculate the area of a triangle
#include <iostream>
using namespace std;

int main()
{
    // input the base and the height of a triangle
    float b, h;
    cout<<"Enter the base: ";
    cin>>b;
    cout<<"Enter the height: ";
    cin>>h;

    // calculate the area
    float res = 0.5 * h * b;
    cout<<"The area of the given triangle is: "<<res<<" square meters.\n";
    return 0;
}

// example
/*
    input:
    Enter the base: 4
    Enter the height: 2.5
    output:
    The area of the given triangle is: 5 square meters.
*/
