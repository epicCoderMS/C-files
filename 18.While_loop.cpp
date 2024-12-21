#include<iostream>

using namespace std;
int main()
{
    string name;

    while (name.empty()){  // force to the user to enter name 
        cout << "enter your name :";
        getline(cin,name);


    }
    
    cout << " welcome " << name <<'\n';
    
  /* while (1==1)
   {
    cout << "help im stuck in infinite loop ";
   }
   
    */
    
    return 0;
}