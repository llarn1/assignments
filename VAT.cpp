// a program to calculate the final price of a product by adding 19% VAT to it.
#include <iostream>
using namespace std;
#define VAT 0.19
int main ()
{
    // input the price
    float price;
    cout<<"Enter Your Price: ";
    cin>>price;
    // calculate it's tax
    float tax = price * VAT;
    // add the tax to the final price and print it 
    cout<<"The Final Price Is: "<<"$"<<price + tax<<endl;
    return 0;
}
