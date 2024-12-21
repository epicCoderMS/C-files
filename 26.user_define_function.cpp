// function ==> a block of reuseble code

#include<iostream>

using namespace std;

void happyBday(string name,int age); // we can define dunction after main()part for this we need to specify function name on top of main()
                                                                                                        //because compiler read code top to bottom

int main()
{
    string name;
    int age;

    cout << "enter your name :";
    cin >> name;
    cout << "enter your age :";
    cin >> age;

    happyBday(name,age); // arguments which we pass in function

    return 0;
}

void happyBday(string name, int age) // set of parameter
{
    cout << "Happy birthday to " << name<<"\n";
    cout << "Happy birthday to " << name<<"\n";
    cout << "Happy birthday dear to "<< name<<"\n";
    cout << "Happy birthday to " << name<<"\n";
    cout << "You are now  " << age << " Years old\n";
}