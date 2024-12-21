

/*  pointers ==> variable that stores a memory address another variable
                    sometimes it's easier to work with an address

                "&" address of operator
                "*" dereference operator
*/

#include<iostream>
using namespace std;

int main()
{
    string name = "brother";
    int age = 20;
    string freePizzas[5] = { "pizza1" ,"pizza2" ,"pizza3" ,"pizza4" ,"pizza5" };

    string *pName = &name; // pointer
    int *pAge = &age;
    string *pFreePizzas = freePizzas; // array is already address so we don't need to add '&'

    cout << pName <<'\n'; // prints address of variable
    cout << *pName <<'\n'; // access the values of that address with '*'

     cout << *pAge <<'\n';

     cout << pFreePizzas <<'\n';  // gives address
     cout << *pFreePizzas <<'\n';
    return 0;
}