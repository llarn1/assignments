// cpp program to convert a temperature from fahrenheit to celsius.
#include <iostream>
using namespace std;
int main ()
{
    // take the temperature
    float F;
    cout<<"Enter Your Temperature: ";
    cin>>F;
    // convert in to celsius
    float C = (F - 32) * 5 / 9; 
    cout<<"The Temperature In celsius Is: "<<C<<"C."<<endl;
    return 0;
}
