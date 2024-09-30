// display the sum of all three digit numbers amoung all 20 numbers using for loop
#include <iostream>
using namespace std;
int main(void)
{
    cout<<"Enter 20 values: ";
    int sum = 0;
    for (int i = 0; i < 20; i++)
    {
        int x;
        cin>>x;
        if (x >= 100 && x <= 999) sum += x;
    }
    cout<<"The sum of only all three-digit numbers is: "<<sum<<"\n";
    return 0;
}
