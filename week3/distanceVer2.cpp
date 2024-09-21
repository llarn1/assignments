// C++ program to calculate the distnace left to get a certain service.
#include <iostream>
using namespace std;
int main(void)
{
    int d;
    cout<<"Enter the miles traveled: ";
    cin>>d;
    // assuming at exactly 10,000 km the driver will take the minor service with zero distance left.
    if (d > 10000)
    {
        int left = 20000 - d;
        cout<<"Type: major\The remaining distance: "<<left<<"\n";
    }
    else
    {
        int left = 10000 - d;
        cout<<"Type: minor\nThe remaining distance: "<<left<<"\n";
    }
    return 0;
}
