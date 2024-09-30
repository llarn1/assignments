#include <iostream>
using namespace std;
int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++) cout<<j<<" ";
        cout<<"\n";
    }
    return 0;
}
