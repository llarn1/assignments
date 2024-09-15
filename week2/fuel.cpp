// C++ program to determine a car's fuel economy
#include <iostream>
using namespace std;

int main()
{
    // take the total distance traveled in km
    float dis;
    cout<<"Enter the total distance in Km: ";
    cin>>dis;
    float l;
    cout<<"Enter the total usage of gas: ";
    cin>>l;

    // calculate and then print the total car's fuel efficiency in kilometer per liter (kpl)
    float KPL = dis / l;
    cout<<"Your car's fuel efficiency is: "<<KPL<<"kpl\n";
    return 0;
}

// i've been using endl in previous problems but switched to '\n' to get used to it, because i found that "endl"
// is way too slow than the new line character '\n', of course this won't matter so much in simple cases
// but it can make significant difference in loops, especially when looping for large ranges for example from 0 to 10^5.
