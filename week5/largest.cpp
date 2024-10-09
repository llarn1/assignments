// C++ program to print the largest entered value
#include <iostream>
using namespace std;
int main()
{
    int x;
    int largest = 0;
    do
    {
        cin>>x;
        if (x > largest) largest = x;
    }
    while (x >= 0);
    cout<<"the largest value is: "<<largest<<"\n";
    return 0;
}
