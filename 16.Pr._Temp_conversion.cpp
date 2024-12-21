#include<iostream>

using namespace std;
int main()
{
    double temp;
    char unit;

    cout << " ************ TEMPEARATURE CONVERSION ****************\n";

    cout<<"F = fahrenheit\n";
    cout<<"C= calcious\n";

    cout<<"what unit would you like to convert to :";
    cin>>unit;
    
    if( unit == 'F' || unit =='f')
    {
        cout << "enter temp in calcious :";
        cin>>temp;

        temp =(1.8 * temp) + 32.0;
        cout<< "Temperature is :"<< temp << " F\n";
    }
    else if( unit == 'C' || unit =='c')
    {
        cout << "enter temp in fahrenheit :";
        cin>>temp;

        temp = (temp - 32) / 1.8;
        cout<<"Temperature is :"<< temp<< " C\n";
    }
    else{
        cout<<"please enter F or C\n";
    }


    cout << " *****************************************************\n";
    return 0;
}