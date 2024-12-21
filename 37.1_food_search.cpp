// technically this is linear search

#include<iostream>  
using namespace std;

int searchArray(string array[] , int size , string element);

int main()
{
    string foods[] = { "badam shake", "chokolate" , "ice cream" , "pasta"};
    int size = sizeof(foods)/sizeof(foods[0]);

    int index;
    string myFood;

    cout << "enter element to search for :" << " \n";
    getline(cin,myFood);

    index = searchArray(foods , size ,myFood);

    if(index != -1){
        cout << myFood << " is at index " << index << '\n';
    }
    else{
        cout << myFood << " is not in an array\n";
    }
    return 0;
}

int searchArray(string array[] , int size , string element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
        
    }
    return -1; // in programming -1 indicates that something wasn't found
}