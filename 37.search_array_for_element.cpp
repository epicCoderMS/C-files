#include<iostream>
using namespace std;

int searchArray(int array[] , int size , int element);

int main()
{
    int numbers[] = { 1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    int index;
    int myNum;

    cout << "enter element to search for :" << " \n";
    cin >> myNum;

    index = searchArray(numbers , size , myNum);

    if(index != -1){
        cout << myNum << " is at index " << index << '\n';
    }
    else{
        cout << myNum << " is not in an array\n";
    }
    return 0;
}

int searchArray(int array[] , int size , int element)
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