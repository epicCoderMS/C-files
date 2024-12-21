/*
type conversion ==> conversion a value of an one data type to another.
                    implicit = automatic
                    explicit = predece value with new data type(int)
*/

#include<iostream>

using namespace std;
int main()
{
    int correct = 8;
    int questions = 10;

    double score = correct/(double)questions * 100;

    cout<< score << "\n";
    return 0;
}