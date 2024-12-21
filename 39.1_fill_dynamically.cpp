
#include<iostream>
using namespace std;

int main()
{
      int size;
      string name;

    cout << " enter size of array :";
    cin >> size;

    cout << " enter value of array :";
    cin >> name;
    string foods[size] ;
    fill(foods,  foods + size, name); 

    for(string food : foods)
    {
        cout << food << " \n";
    }
    return 0;
}