
//  sizeof() == determines the size in bytes of a variable , data type , class , object etc...

#include<iostream>
using namespace std;

int main()
{
    double gpa = 7.50;
    string name = " mr bean";
    char grade = 'F';
    bool student = true;

    char grades[] = {'A' ,'B','C' ,'D','E', 'F' ,'G'}; // each array elements use memoty of 1 byte
    string students[] = {   "raj" , "shyam", "rahul" , "bhim" };


    cout << sizeof(gpa) << " bytes \n";

    cout << sizeof(double) << " bytes\n";
   
    cout << sizeof(name) << " bytes \n";

    cout << sizeof(char) << " bytes \n";

    cout << sizeof(student) << " bytes \n";

    
    cout << sizeof(grades) << " bytes \n";

    cout << sizeof(grades)/sizeof(char) << " elements \n";

    cout << sizeof(students)/sizeof(string) << " elements \n";

    return 0;
}