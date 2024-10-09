// C++ program to calculate the factorial of a number
#include <iostream>
using namespace std;
int main()
{
    // take input
    int n;
    cin>>n;
  
    int res = 1;
    int count = 1;
    while(count <= n)
    {
        res *= count;
        count++;
    }
    cout<<res<<"\n";
    return 0;
}
