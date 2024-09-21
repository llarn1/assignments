// C++ program that tell the users if it's illegal for them to drive a car.
#include <iostream>
using namespace std;
int main(void)
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >= 19) cout<<"You can drive a car\n";
    return 0;
}
