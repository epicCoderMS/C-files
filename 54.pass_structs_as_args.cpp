#include<iostream>
using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};
 //void printCar(Car car);

void printCar(Car &car); // this will send original struct and have same address

int main()
{
    Car car1;
    Car car2;

    car1.model = "mustange";
    car1.year = 2020;
    car1.color = "blue";

    car2.model = "thar";
    car2.year = 2022;
    car2.color = "black";

    cout << &car1 << '\n';

    printCar(car1);

    cout << &car2 << '\n';
    printCar(car2);

    return 0;
}

void printCar(Car &car){
    cout << &car << '\n';

    cout << car.model << '\n';  // this all data send  original struct
    cout << car.year << '\n';
    cout << car.color << '\n';
}


/*void printCar(Car car){
    cout << &car << '\n';

    cout << car.model << '\n';  // this all data send copy of the struct not original struct
    cout << car.year << '\n';
    cout << car.color << '\n';
}
*/