// C++ program that prints positive if the provided numbers are positive.
#include <iostream>
using namespace std;
int main(void)
{
    int x, y;
    cout<<"enter your first and second values: ";
    cin>>x>>y;

    // taking zero as neither positive nor negative
    if (x > 0 && y > 0) cout<<"Both Positive\n";
    return 0;
}

