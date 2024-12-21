
/*
    struct = a structure that group related variable under one name
             structs can contain many different data types (string , int , bool,etc...)
             variables in a struct are known as "members"
             members can be accessed with .(dot) " class member access operator"
*/

#include<iostream>
using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled;  // here in var we can also set default values like enrolled = true
};                    // so we doesn't need to declare in main()

int main()
{
    student student1;
    student1.name = "sponge";    // here we access  name memmber of struct with .(dot) 
    student1.gpa = 2.3;
    student1.enrolled = true;

    student student2;
    student2.name = "star";
    student2.gpa = 5.67;
    student2.enrolled = false;

    student student3;
    student3.name = "shark";
    student3.gpa = 8.09;
    student3.enrolled = true;


    cout << student1.name << '\n';
    cout << student1.gpa << '\n';
    cout << student1.enrolled << '\n';

    cout << student2.name << '\n';
    cout << student2.gpa << '\n';
    cout << student2.enrolled << '\n';

    cout << student3.name << '\n';
    cout << student3.gpa << '\n';
    cout << student3.enrolled << '\n';


    return 0;
}