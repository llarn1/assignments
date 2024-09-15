// C++ program to print the name is several ways
#include <iostream>
using namespace std;
int main()
{
    // input the data needed
    string firstName, middleName, lastName, title;
    cout<<"Enter your first name: ";
    cin>>firstName;
    cout<<"Enter your middle name: ";
    cin>>middleName;
    cout<<"Enter your last name: ";
    cin>>lastName;
    cout<<"Enter your preferred title: ";
    cin>>title;

    // print the name in the order: Title. FirstName MiddleName LastName
    cout<<title<<". "<< firstName + " " + middleName + " " + lastName<<"\n";
    // print the name in the order: FirstName MiddleName LastName
    cout<<firstName + " " + middleName + " " + lastName<<"\n";
    // print the name in the order: LastName, FirstName
    cout<<lastName<<", "<< firstName <<"\n";
    // print the name in the order: LastName, FirstName MiddleName
    cout<<lastName<<", "<< firstName + " " + middleName<<"\n";
    // print the name in the order: LastName, FirstName MiddleName, Title
    cout<<lastName<<", "<< firstName + " " + middleName<<", "<< title <<"\n";
    // print the name in the order: FirstName LastName
    cout<< firstName + " " + lastName<<"\n";
    return 0;
}
