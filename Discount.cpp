// a program to calculate the final price after a given discount.
#include <iostream>
using namespace std;
int main ()
{
    // input the price and the discount
    float price, discount;
    cout<<"Enter Your Price: ";
    cin>>price;
  
    // while the discount is not correct keep asking for it
    do
    {
        cout<<"Enter Your Percentage Discount (Between 1 and 100 inclusive): ";
        cin>>discount;
    } while (discount < 1 || discount > 100);
  
    // calculate the Discount for the given price and print it
    float amountOfDiscount = price * (discount / 100);
    cout<<"Your Discount Is: $"<<amountOfDiscount<<endl;
  
    // print the price after the discount
    cout<<"Your Final Price Is: $"<<price - amountOfDiscount<<endl;
    return 0;
}
