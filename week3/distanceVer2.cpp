// C++ program to calculate the distnace left to get a certain service.
#include <iostream>
using namespace std;
int main(void)
{
    floot d;
    cout<<"Enter the miles traveled: ";
    cin>>d;
    // assuming at exactly 10,000 km (6213.71miles) the driver will take the minor service with zero distance left.
    if (d > 6213.71)
    {
        floot left = 12427.42 - d;
        cout<<"Service type: major\The remaining distance: "<<left<<"miles\n";
    }
    else
    {
        floot left = 6213.71 - d;
        cout<<"Service type: minor\nThe remaining distance: "<<left<<"miles\n";
    }
    return 0;
}
