#include<iostream>
    
    /*
        Ternary Operator ?: ==> replacement of of-else stmt
                                condition ? expression1 : expression2;
    */
using namespace std;
int main()
{
   /* int mark;

    cout << "enter your marks :\n";
    cin >> mark;

    mark > 33 ? cout << "you passed!\n" : cout <<" you failed\n";
    */

 /* int num;

   cout << "enter your number :\n";
    cin >> num;

    num % 2  ? cout << "number is odd\n" : cout << "number is even\n";  //or you can use num % 2 ==1 
*/
 
 bool hungry = true;
  //hungry ? cout << " you are hungry\n" : cout << " you are full\n"; // another way->
  cout << (hungry ? "you are hungry\n" : "you are full\n");
    return 0;
}