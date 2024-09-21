// C++ program that prints the giving values in ascending order.
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c, d;
    cout<<"Enter the two values: ";
    cin>>a>>b;
    if (a > b)
    {
        int tmp = b;
        b = a;
        a = tmp;
    }
    cout<<a<<" "<<b<<"\n";
    return 0;
}
