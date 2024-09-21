// C++ program that checks if the number is between 0 and 100.
#include <iostream>
using namespace std;
int main(void)
{
    float val;
    cout<<"Enter your number: ";
    cin>>val;
    if (val >= 0 && val <= 100) cout<<"your number is between zero and one-hundred inclusive\n";
    else cout<<"your provided number is not between zero and one-hundred\n";
    return 0;
}

/*
    example
    input:
    Enter your number: 0.5
    output:
    your number is between zero and one-hundred inclusive
*/
