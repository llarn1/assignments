// C++ program to calculate the average of four test grades
#include <iostream>
using namespace std;
int main()
{
    // take the four grades
    float a,b,c,d;
    cout<<"Enter your first test grade: ";
    cin>>a;
    cout<<"Enter your second test grade: ";
    cin>>b;
    cout<<"Enter your third test grade: ";
    cin>>c;
    cout<<"Enter your fourth test grade: ";
    cin>>d;
  
    // calculate and print out the average
    float sum = a + b + c + d;
    float avg = sum / 4;
    cout<<"Your average grade is: "<<avg<<"\n";
    return 0;
}

// example
/*
    input:
    Enter your first test grade: 94
    Enter your second test grade: 88
    Enter your third test grade: 91
    Enter your fourth test grade: 79.5
    output:
    Your average grade is: 88.125
*/
