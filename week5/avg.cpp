// C++ program to print the Average of set of numbers
#include <iostream>
using namespace std;
int main()
{
    float x;
    float sum;
    int count_numbers = 0;
    do{
        cin>>x;
        if (x >= 0)
        {
            sum += x;
            count_numbers++;
        }
    }
    while(x >= 0);
    float avg = sum / count_numbers;
    cout<<"Average: "<<avg<<"\n";
    return 0;
}
