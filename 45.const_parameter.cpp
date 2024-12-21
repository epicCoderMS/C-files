/* const parameter == parameter that is effectively read only.
                      code is more secure & conveys intent 
                      useful for references and pointers
*/

#include<iostream>
using namespace std;

void printInfo(const string &name, const int &age);  // for const we need to pass by reference '&'
                                                    //  in this reference case no other can change value 
int main()                                          // in pointer case no one can change its address
{
    string name = "brother";
    int age = 20;

    printInfo(name,age);

    return 0;
}

void printInfo(const string &name, const int &age){
   // name = " ";
   // age = 0;
    cout << name << '\n';
    cout << age << '\n';
}