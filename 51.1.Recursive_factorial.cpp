#include<iostream>
using namespace std;

int factorial(int num);
int main()
{
    cout << factorial(4) <<'\n';
    return 0;
}

/* iterative 
int factorial(int num){
    int result = 1;
    for (int i = 1; i <= num; i++)
    {
        result *= i;
    }
    return result;
    
}
*/

//recursion 
int factorial(int num){
    int result = 1;
    if(num > 1)
    {
       return num * factorial(num - 1);
    }
    else{
        return 1;
    }
}