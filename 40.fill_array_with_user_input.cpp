#include<iostream>
using namespace std;

int main()
{
    string foods[5];
    int size = sizeof(foods)/sizeof(foods[0]);
    string temp;

    for (int i = 0; i < size; i++)
    {
        cout << " enter food you like or 'q' to quit #  " << i  + 1 << " :" ;
        getline(cin, temp);

        if(temp == "q"){
            break;
        }
        else{
            foods[i] = temp;
        }
        
    }
    
    cout << "you like the following food : \n";

    /*for( string food : foods )  // this make space of remaining element that user not entered and quit
    {
        cout << food << '\n';
    }
    */

   //better way
   for (int i = 0; !foods[i].empty(); i++)
   {
    cout << foods[i] << '\n';
   }
   
    return 0;
}