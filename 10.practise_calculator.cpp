// get  the third side of triangle (paythgoras pramey)

#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    double a;
    double b;
    double c;

    cout << "enter side A :";
    cin >> a;

    cout << "enter side B :";
    cin >> b;

   // a = pow(a,2);
   // b = pow(b,2);
    c = sqrt(pow(a,2) + pow(b,2));

    cout << " side C is :" << c <<'\n';

    return 0;
}