/*  
NULL values ==> a special value that means something has no value.
                    when a pointer is holding NULL value, 
                    that pointer is not pointing at anything (null pointer)
                    
nullptr ==>keyword that represents a null pointer literal
    
reasons using null pointer ==> nullptr are helpful when determining if an address was successfully assigned to a pointer

NOTE : when using pointers ,
        be careful that your code isn't dereferencing nullptr or pointing to free memory.
        this will cause undefined behaviour 

*/

#include<iostream>
using namespace std;

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        cout << "address was not assigned \n";
        
    }
    else{
        cout << "address was assigned  \n";
        cout << *pointer << '\n';
    }
    return 0;
}
