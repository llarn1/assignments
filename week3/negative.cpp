// C++ program that tells the user if he enterd at least one negative value amoung four valuse.
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c, d;
    cout<<"Enter the four values: ";
    cin>>a>>b>>c>>d;
    if (a < 0 || b < 0 || c < 0 || d < 0) cout<<"Among the provided numbers, there is a negative one!\n";
    return 0;
}
