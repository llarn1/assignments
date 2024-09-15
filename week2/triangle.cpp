// C++ program to prompt the user to enter two angles of a triangle and calculate the third angle
#include <iostream>
using namespace std;
int main()
{
    // take the two angles
    float a1, a2;
    cout<<"Enter the first angle: ";
    cin>>a1;
    cout<<"Enter the second angle: ";
    cin>>a2;

    // calculate and display the third angle
    float third_angle = 180 - (a1 + a2);
    cout<<"The third angle of this triangle is: "<<third_angle<<"deg\n";
    return 0;
}

// example
/*
    input:
    Enter the first angle: 45.5
    Enter the second angle: 62.75
    output:
    The third angle of this triangle is: 71.75deg
*/
