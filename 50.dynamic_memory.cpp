/*

dynamic memory ==> memory that is allocated after the program is already compiled & running.
                   use the "new" operator to allocate memory in the heap rather than stack

                   useful when we don't know much memory we will need.
                   makes our programs more flexible, especiallywhen accepting user input.

                   includes "new" & "delete" keyword
*/

#include<iostream>
using namespace std;

int main()
{
  /*  int *pNum = NULL;
    pNum = new int;

    *pNum = 20;

    cout << "address : " << pNum << '\n';
    cout << "value : " << *pNum << '\n';

    delete pNum;
 */

// create dynamically
    char *pGrades = NULL;
    int size;

    cout << "how many grades to enter in? : ";
    cin >> size;

    pGrades = new char[size];

    for (int  i = 0; i < size; i++)
    {
        cout << " enter grade #" << i + 1 << " : ";
        cin >> pGrades[i];
    }
    
    for (int  i = 0; i < size; i++)
    {
        cout << pGrades[i] << " " ;
    }
     cout <<'\n';
    delete[] pGrades;
    

    return 0;
}