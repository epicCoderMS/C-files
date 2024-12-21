#include<iostream>
using namespace std;

double getTotal(double prices[], int size);

int main()
{
     double prices[] = { 10 , 9.99 , 7.50 , 100.00 };
     int size = sizeof(prices)/sizeof(prices[0]);

     double total = getTotal(prices , size);

     cout << total <<  " Rs\n";

    return 0;
}
                   // here function recieve array it decays into a pointer and func no longer know size of array   
double getTotal(double prices[], int size){          //**so we need to pass size as additional args to let func know size
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}