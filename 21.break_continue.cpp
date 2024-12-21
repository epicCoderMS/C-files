/*
        break ==> break out of a loop
        continue ==> skip current location
*/

#include<iostream>

using namespace std;
int main()
{
   /* for (int i = 1; i <= 20; i++)
    {
        if (i == 15)   
        {
            break;  // this stop when the loop when i =15 , so it print only 1 to 14
        }
        cout << i << '\n';
    }
    */

     for (int i = 1; i <= 20; i++)
    {
        if (i == 15)   
        {
            continue;  // this will skip the 15 and print 1 to 20
        }
        cout << i << '\n';
    }
    
    return 0;
}