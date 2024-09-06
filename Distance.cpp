// a program to calculate the distance travled by a car given the time and acceleration.
#include <iostream>
using namespace std;

int main ()
{
    // take input
    float time, a;
    cout<<"Enter your car's acceleration: ";
    cin>>a;
    cout<<"Enter the time taken: ";
    cin>>time;
    float result = 0.5 * a * time * time;
    
    // print the distance
    cout<<"The Total Distance Is: "<<result<<"m."<<endl;
    return 0;
}
