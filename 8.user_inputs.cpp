// cout << (insertion operator)
// cin >> (extraction operator)

#include<iostream>

using namespace std;
int main()
{
    string name;
    char grade;

   
    cout << "what is your Grade? :";
    cin >> grade;

     cout << "what is  full name? :";
   // cin >> name;
    getline(cin>> ws,name) ;  // getline function is used to able type name including  white spaces 
               //  |
               //  used for eliminate white space or new line char before any user input

    cout<< "hello and welcome "<<name <<'\n';
     cout<< " you passed with "<< grade << " grade"<<'\n';
    return 0;
}