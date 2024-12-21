#include<iostream>

using namespace std;
int main()
{
    string name;

    cout << "enter your name : ";
    getline(cin,name);

    /* if(name.empty()){
        cout << " please enter your name \n";
    }
    else{
        cout <<"hello " << name << endl;
    }
    */



   /* if(name.length()> 12){
        cout << " your name can't be over 12 char\n";
    }
    else{
        cout <<"welcome " << name << endl;
    }
    */


    /* name.clear(); // clear the string you entered 
   cout << "welcome " << name << '\n';
 */


   /* name.append("@gmail.com"); // add specified line or word at end of string you enter
    cout << "your username is now " << name << '\n';
*/ 


  /*  cout << name.at(1) << '\n';  // return position of string 
*/



  /*  name.insert(0,"@"); // insert char 
    cout << name << '\n';
*/

   /*cout << name.find("m") <<'\n'; // finds specific char
   */ 

  name.erase(0,3); // erase the string from specific index
  cout << name << '\n';

   return 0;
}