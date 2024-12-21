
// memory address == a location in memory where data is stored 
//                   a memory location can accessed with & (address of oprator)

#include<iostream>
using namespace std;

int main()
{
    string name = " giga chadguru";
    int age = 20;
    bool coder = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &coder << '\n';
    
    return 0;
}