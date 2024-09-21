// C++ program that calculate the average of three temperatures.
#include <iostream>
using namespace std;
int main(void)
{
    int t1, t2, t3;
    cout<<"Enter the three temperature: ";
    cin>>t1>>t2>>t3;
    int avg = (t1 + t2 + t3) / 3;
    // the average is of type int because here we don't care about the
    // fractional part of the number (it will be compared with just 35 at the end).
    if (avg >= 36) cout<<"Heat Wave\n";
    return 0;
}

/*
    example
    input:
    Enter the three temperature: 28 44 38
    output:
    Heat Wave
*/
