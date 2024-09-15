// C++ program to calculate the tip and tax of a receipt
#include <iostream>
using namespace std;

int main()
{
    const float tip_percentage = 0.10;
    const float tax_percentage = 0.07;

    // input the total amount of the meal
    float m;
    cout<<"Enter the total charge for the meal: ";
    cin>>m;
    // calculate and print the tip, tax and the total amount spent
    float tip = m * tip_percentage;
    float tax = m * tax_percentage;
    cout<<"Tip: $"<<tip<<"\n";
    cout<<"Tax: $"<<tax<<"\n";

    cout<<"The total amount spent: $"<<m + tip + tax<<"\n";
}

// example
/*
    input:
    Enter the total charge for the meal: 245
    output:
    Tip: $24.5
    Tax: $17.15
    The total amount spent: $286.65
*/
