// C++ program to check if the provided lengths can form a triangle.
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout<<"Enter the three lengths: ";
    cin>>a>>b>>c;
    // in case we're allowed to have a degenerate triangle, we will
    // also have to check for equality aka (a + b >= c and so on).
    if (a + b > c && a + c > b && b + c > a) cout<<"It's possible to form a triangle with the provided lengths.\n";
    else cout<<"The provided numbers cannot be lengths of the three sides of a triangle\n";
    return 0;
}
