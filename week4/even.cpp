// display the product of N (only even) numbers using for loop
#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    int prod = 1;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        if (x % 2 == 0) prod *= x;
    }
    if (prod == 1) cout<<"You enterd no even integers\n";
    else cout<<"The product of the provided numbers is: "<<prod<<"\n";
    return 0;
}
