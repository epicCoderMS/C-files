#include<iostream>

using namespace std;
int main()
{
  /*  for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << j << ' ';
        }
        cout << "\n";
    }

     /*  for (int i = 1; i <= 5; i++) //pattern prog
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << ' ';
        }
        cout << "\n";
    }
    */
    
    // practise prog
    int rows;
    int cols;
    char symbol;

    cout << "how many rows :";
    cin >> rows ;

    cout << "how many cols :";
    cin >> cols ;

    cout << "enter symbol to use :";
    cin >> symbol ;

     for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << symbol ;
        }
        cout << "\n";
    }

    return 0;
}