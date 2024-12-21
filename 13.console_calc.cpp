#include<iostream>

using namespace std;
int main()
{
    char op;
    double num1;
    double num2;
    double result;

    cout << "************ CALCULATOR ************\n";

     cout << "enter operation (+ - * /) :";
     cin >> op;

     cout << " enter num 1 :";
     cin >> num1;

     cout << " enter num 2 :";
     cin >> num2;

     switch (op)
     {
     case '+':
        result = num1 + num2;
        cout << "result is :" << result << '\n';
        break;

    case '-':
        result = num1 - num2;
        cout << "result is :" << result << '\n';
        break;

    case '*':
        result = num1 * num2;
        cout << "result is :" << result << '\n';
        break;
     
    case '/':
        result = num1 / num2;
        cout << "result is :" << result << '\n';
        break;

     default:
        cout << " please choose a valid operator\n ";
        break;
     }


    cout << "************************************\n";
    return 0;
}