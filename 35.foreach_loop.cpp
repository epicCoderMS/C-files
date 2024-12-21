

// foreach loop ==> loop that eases the traversal over an iterable dataset
                    // less flexible than for loop
                    // in c++ foreeach loop declared with keyword "for"  not foreach

#include<iostream>
using namespace std;

int main()
{
  /*
    string students[] = {   "raj" , "shyam", "rahul" , "bhim" , "jay"};
    for(string student : students)
    {
         cout << student<< '\n';  
    }
  */
    int marks[] = { 10 , 20 , 40 , 50 ,90};
    for(int mark : marks)
    {
       cout << mark << '\n';
    }

    return 0;
}