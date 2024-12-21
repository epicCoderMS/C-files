

#include<iostream>
#include<vector>   

 /*
     typedef -> reserved keyword used to create an additional name (aliases) for another data type.
         new identifier for an existing type helps with readability and reduces types.
         use when there is a clear benefit replaced with "using " ( work better w/ templates )

 */

using namespace std;

//typedef vector<pair<string, int >> pairlist_t;
 typedef string text_t;
 typedef int number_t;

 //using text_t = string; // suiteable for templates 
 //using number_t = int;
int main()
{
   
    text_t firstName= "MS";
    number_t age=20;

    cout<< firstName<<'\n';
    cout<< age<<'\n';
    return 0;
}

 
