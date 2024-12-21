// local variable ==> declared inside a function or block {}    // hidden for outside code
// global variable ==> declared outside of all functions        // accessible to all functions

// NOTE : try to avoid use of global var because of less secure

#include<iostream>

using namespace std;
int mynum = 30;

void printNum();

int main()
{
    int mynum = 20;
   
    printNum();  // local
    cout << :: mynum << endl; // global 
            // compiler prints local variable first if available, if not then global
            // to print global var we need to specify :: (scope resolution operator)
    return 0;
}

void printNum()
{
    int mynum = 10;
     cout <<  mynum << endl;
}