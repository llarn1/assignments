// cpp program to swap two values.
#include <iostream>
using namespace std;

int main ()
{
    // take input
    int x, y;
    cout<<"Enter Your First Value: ";
    cin>>x;

    cout<<"Enter Your Second Value: ";
    cin>>y;

    // swap values in main
    int tmp = x;
    x = y;
    y = tmp;

    // print the values after swapping
    cout<<"First Value: "<<x<<endl;
    cout<<"Second Value: "<<y<<endl;
    return 0;
}
// we can also do that in a function using pointers
/* 
void swap (int *num1, int *num2)
{
    int tmp = *num1;
    *num1 = *num2;
    *num2 = tmp;
}
*/
// with taking notes that when calling the function, we must pass
// the addresses of the two arguments. for example swap(&x, &y).
