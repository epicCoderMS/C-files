#include<iostream>
/*
    && (and) => check  if two condition are true 
    || (or)  => check if at least one condition is true
     ! (not) => reverse the logical state of its operand (return true as false and false as true)
*/

using namespace std;
int main()
{
    int temp;
    bool sunny = false;

    cout << "enter temp :\n" ;
    cin >> temp;

    if (temp > 0 && temp < 30)   //  if (temp < 0 || temp > 30) 
{
    cout << "temperature is good\n";
    }
    else{
        cout << " tempearature is bad\n";
    }

    if (!sunny)
    {
        cout << " cloudy outside\n";
    }
    else
    {
        cout << " sunny outside\n";
    }
    
    
    return 0;
}