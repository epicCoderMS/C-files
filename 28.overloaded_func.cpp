#include<iostream>

// overloaded functions ==> different version of the same function
//                             each version has diff parameter

// function name + parameter is known as a function's 'signature'
//                                                  and each function's 'signature' needs to be unique, kind like id
using namespace std;

void badamshake();
void badamshake(string flavour);
void badamshake(string flavour1, string flavour2 );


int main()
{
    badamshake("ice cream" , "chokolate");
    
    return 0;
}

void badamshake()
{
    cout << " here is your badam shake \n";
}

void badamshake(string flavour )
{
    cout << " here is your " <<  flavour << " badam shake\n ";
}

void badamshake(string flavour1, string flavour2 )
{
    cout << " here is your " <<  flavour1 << " and " << flavour2 << " badam shake\n ";
}