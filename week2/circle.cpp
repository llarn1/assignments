// C++ program to calculate the radius, perimeter and the area of a circle
#include <iostream>
#define PI 3.14159265
using namespace std;

int main()
{
    // input the diameter
    float d;
    cout<<"Enter the diameter: ";
    cin>>d;
    // calculate the radius, perimeter, area and voulme
    float radius = d / 2;
    float C = 2 * PI * radius;
    float area = C / 2 * radius; // it's the same as PI * r * r
    float volume = 4 * radius * area / 3; // also it's the same as 4/3 * PI * r * r * r

    cout<<"Radius: "<<radius<<" meters.\n";
    cout<<"Perimeter: "<<C<<" meters.\n";
    cout<<"Area: "<<area<<" square meters.\n";
    cout<<"Volume: "<<volume<<" cubic meters.\n";
    return 0;
}

 // example
 /*
    input:
    Enter the diameter: 4
    output:
    Radius: 2 meters.
    Perimeter: 12.5664 meters.
    Area: 12.5664 square meters.
    Volume: 33.5103 cubic meters.
 */
