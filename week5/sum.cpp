// C++ program to calculate the sum of all positive integars
#include <iostream>
using namespace std;
int main()
{
    int x;
    int sum = 0;
    do
    {
        cin>>x;
        sum += x;
    }
    while (x >= 0);
    // add back the negative value that you deleted
    sum += abs(x);
    cout<<sum;
    return 0;
}
