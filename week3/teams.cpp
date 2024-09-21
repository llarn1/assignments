// C++ program to output the name of the winning team.
#include <iostream>
using namespace std;
int main(void)
{
    string team1, team2;
    int goalsOfTeam1, goalsOfTeam2;
    cout<<"Enter the name of the first team: ";
    cin>>team1;
    cout<<"Enter the golas of the first team: ";
    cin>>goalsOfTeam1;

    cout<<"Enter the name of the second team: ";
    cin>>team2;
    cout<<"Enter the golas of the second team: ";
    cin>>goalsOfTeam2;
    // it's guaranteed that there's no tie, so we don't need to handle that situation
    if (goalsOfTeam1 > goalsOfTeam2) cout<<team1<<"\n";
    else cout<<team2<<"\n";
    return 0;
}

/*
    example
    input:
    Enter the name of the first team: thimos
    Enter the golas of the first team: 22
    Enter the name of the second team: georga 
    Enter the golas of the second team: 20
    output:
    thimos
*/
