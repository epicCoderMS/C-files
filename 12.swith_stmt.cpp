#include<iostream>

/*
    switch stmt ==> an alternative of using many else if else stmt.
                                            compare one value against matching cases
*/

using namespace std;
int main()
{
    int season;

    cout << "enter a season(1-4) : ";
    cin >> season;

    switch (season)
    {
    case 1:
        cout << "this is winter"<<'\n';
        break;

    case 2:
        cout << "this is summer"<<'\n';
        break;

    case 3:
        cout << "this is monsoon"<<'\n';
        break;

    case 4:
        cout << "this is autumn"<<'\n';
        break;

    default: 
        cout << "there is not any season"<<'\n';
        break;
    }
    return 0;
}