#include<iostream>

/*
     if stmt ==> do something if condition is ture
                    if not, then don't do it
    */

using namespace std;
int main()
{
    int age;

    cout << "enter your age : ";
    cin >> age;

    if(age <= 100){
        cout << "you are too old to enter the page" <<'\n';
    }
     else if(age >= 18){
        cout << "welcome to the page" <<'\n';
    }
    else if (age <= 0)
    {
        cout << "you haven't been born yet" << '\n';
    }
    
    else{
        cout << "you can't enter in this page " << '\n';
    }

    return 0;
}