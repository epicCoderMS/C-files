// pseudo random = not truly randoms (but close)

#include<iostream>

using namespace std;
int main()
{
  /* srand(time(NULL)); // most developer use time to generate rand num

    int num = (rand() % 6) + 1 ; // use % and number that you want range, like here % 6 will generate between 1 to 6 
    cout << num << '\n';    // we use + 1 to avoid 0 at reminder
*/
   
  /*  // 20 sides (generate  1-20 random numbers)
    srand(time(NULL)); 

    int num = (rand() % 20) + 1 ;  
    cout << num << '\n';

  */


     // 100 sides (generate 1-100 random numbers)
    srand(time(NULL)); 

    int num = (rand() % 100) + 1 ;  
    cout << num << '\n'; 
    

    return 0;
}