#include<iostream>

using namespace std;

string concatName(string firstName, string lastName); // or you can use string1 and string2 instead firstName & lastName 

int main()
{
    string firstName;
    string lastName;
    string fullName;

    cout << "enter your first  name : ";
    cin >> firstName;

    cout << "enter your last  name : ";
    cin >> lastName;

    fullName = concatName(firstName,lastName);
    cout  << " hello "<< fullName << '\n';
    return 0;
}

string concatName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}