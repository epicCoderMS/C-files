#include<iostream>

/*
    switch stmt ==> an alternative of using many else if else stmt.
                                            compare one value against matching cases
*/

using namespace std;
int main()
{
    char grade;

    cout << "what is your grade? : ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "you did greate "<<'\n';
        break;

    case 'B':
        cout << "you did  well "<<'\n';
        break;

    case 'C':
        cout << "you did okey"<<'\n';
        break;

    case 'D':
        cout << "you did not do well as expected"<<'\n';
        break;

    case 'E':
        cout << "you need improvements"<<'\n';
        break;

    case 'F':
        cout << "you failed"<<'\n';
        break;


    default: 
        cout << "only enter grade from (A-F)"<<'\n';
        break;
    }
    return 0;
}