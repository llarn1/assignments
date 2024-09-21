// C++ program that tells the user if the provided value is less than or equal to 100.
#include <iostream>
using namespace std;
int main(void)
{
    float num;
    cout<<"Enter your number: ";
    cin>>num;
    if (num > 100) cout<<"your number is grater than one-hundred\n";
    else cout<<"your number is less than or equal to one-hundred\n";
    return 0;
}

/*
    example
    input:
    Enter your number: 100.1
    output:
    your number is grater than one-hundred
*/
