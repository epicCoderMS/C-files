/*
    do while loop ==> do some block or code first ,
                        then repeat again if condition is true

*/

#include<iostream>

using namespace std;
int main()
{
    int number;

    /* cout << "enter a positive # :";
    cin >> number;

    while (number < 0)
    {
        cout << "enter a positive # :";
        cin >> number;

    }
     cout << "the # is :" << number<< '\n';
     */
     do   // in better way
     {
         cout << "enter a positive # :";
         cin >> number;
     } while (number < 0);
      
    
     cout << "the # is :" << number<< '\n';
    return 0;
}