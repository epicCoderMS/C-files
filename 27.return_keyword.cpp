// return ==> return a value back to the spot
//              where you called the encompassing function

#include<iostream>

using namespace std;

double square(double length);
double cube(double length);

int main()
{
    double length; 


    cout << "Enter length of square :";
    cin >> length;

    double area = square(length);
    double volume = cube(length);

    cout << "the AREA :" << area << "cm^2\n";
    cout << "the VOLUME :" << volume << "cm^3\n";
    return 0;
}

double square(double length)
{
    return length * length;
}

double cube(double length)
{
    return length * length * length;
}
