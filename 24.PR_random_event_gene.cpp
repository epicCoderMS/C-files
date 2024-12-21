#include<iostream>
#include<ctime>

using namespace std;
int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1 ;

    switch (randNum)
    {
    case 1 :
        cout << " you win a 10rs cashback \n";
        break;

    case 2 :
        cout << " you win a movie ticket \n";
        break;

    case 3 :
        cout << " you win a  free travel booking \n";
        break;

    case 4 :
        cout << " you win a tablet\n";
        break;

    case 5 :
        cout << " you win a bike \n";
        break;

    default:
        break;
    }
    return 0;
}