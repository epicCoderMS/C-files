#include<iostream>
using namespace std;


void swap(string &x, string &y);

int main()
{
    string x = "cool";
    string y = "water";
    string temp;

    swap(x,y);

    cout << "X :" << x << '\n';
    cout << "Y :" << y << '\n';

    return 0;
}        

void swap(string &x, string &y){
                // this main and function variable has different memory address 
                // to pass value of main into func we need reference of that variable 
                //we access that with '&' // this make same memory address
    string temp;
    temp = x;
    x = y;
    y = temp;
}