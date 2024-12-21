// print an array one by one in loop
//  iterate array using for loop

#include<iostream>
using namespace std;

int main()
{
   /*
    string students[] = {   "raj" , "shyam", "rahul" , "bhim" , "jay"};

    for (int i = 0; i < sizeof(students)/sizeof(string); i++)
    {                      // this will print all data if we add more names in array  **not need to change limit in loop everytime 
        cout << students[i] << '\n';                                                  
    }

    */
    char grades[] = {'A' ,'B','C' ,'D','E', 'F' ,'G'};
    for (int i = 0; i < sizeof(grades)/sizeof(char) ; i++)
    {
         cout << grades[i] << '\n';
    }
    
    return 0;
}