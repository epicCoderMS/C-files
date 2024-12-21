

// fill() == fills a range of elements with a specified value
//          syntax : fill(begin , end , value)

#include<iostream>
using namespace std;

int main()
{
   /*  const int size =200;

    string foods[size] ;
    fill(foods,  foods + size, "pizza"); 

    for(string food : foods)
    {
        cout << food << " \n";
    }
*/

// fill only half
 /* const int size =200;

    string foods[size] ;
    fill(foods,  foods + (size/2), "pizza"); // this will fill begining to half
    fill( foods + (size/2) ,foods + size, "hotdog"); // this will fill half to end

    for(string food : foods)
    {
        cout << food << " \n";
    }
*/

// fill in three parts
const int size =99;

    string foods[size] ;

    fill(foods,  foods + (size/3), "pizza"); 
    fill( foods + (size/3) ,foods + (size/3)*2, "hotdog"); 
    fill ( foods + (size/3)*2 , foods + size , " paneer");
    for(string food : foods)
    {
        cout << food << " \n";
    }

    return 0;
}