// C++ program that prints positive if the provided number is positive.
#include <iostream>
using namespace std;
int main(void)
{
    int x;
    cout<<"enter your value: ";
    cin>>x;

    // taking zero as neither positive nor negative
    if (x > 0) cout<<"Positive";
    return 0;
}
