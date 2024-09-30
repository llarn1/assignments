// display the average of N numbers
#include <iostream>
using namespace std;
int main(void)
{
    int N;
    cin>>N;
    float sum = 0;
    for (int i = 0; i < N; i++)
    {
        float x;
        cin>>x;
        sum += x;
    }
    if (N > 0) cout<<"The average of the provided number is: "<< sum / N <<"\n";
    return 0;
}
