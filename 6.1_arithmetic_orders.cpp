#include<iostream>

/*
    order left to right (6-5)+4*4/2
    1.parenthesis             ->
    2.multiplication & division 
    3. addition & substraction
*/

using namespace std;
int main()
{
    int students= (6-5)+4*4/2;
    cout<< students<<'\n';
    return 0;
}