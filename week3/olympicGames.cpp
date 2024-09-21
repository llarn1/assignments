// C++ program to indicates whether an athlete is qualified or not. 
#include <iostream>
using namespace std;
int main(void)
{
    int a, b, c;
    cout<<"Enter your three jump distances: ";
    cin>>a>>b>>c;
    int avg = (a + b + c) / 3;
    if (avg >= 8) cout<<"Qualified\n";
    else cout<<"Disqualified\n";
    return 0;
}
