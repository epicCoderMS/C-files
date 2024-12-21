
/*
    recursion ==> a programming technique where a function 
                 invokes itself from within 
                 break a complex concept into a repeatable 
                 single step

     problem approach ==>  ( iterative vs recursive)

     advantages = less code and its cleaner 
                useful for sorting and searching algorithms

    disadvantages = uses more memory 
                    slower
*/

#include<iostream>
using namespace std;

void walk(int steps);
int main()
{
    walk(50);
    return 0;
}

// iterative approach
/*void walk(int steps){
    for (int  i = 0; i < steps; i++)
    {
        cout << " just you take a step\n";
    }
    
}
*/

//recursive approach
void walk(int steps){
    if (steps > 0)
    {
        cout << " just you take a step\n";
        walk(steps - 1);
    }
    
}

