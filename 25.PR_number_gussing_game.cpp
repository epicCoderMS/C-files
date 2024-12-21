#include<iostream>

using namespace std;
int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100 ) + 1;

    cout << "------------ NUMBER GUESSING GAME ------------\n ";

    do
    {
        cout << "enter a guess between 1-100 :" ;
        cin >> guess;
        tries++;

        if (guess < num)
        {
            cout << "too low\n";
        }
        else if (guess > num)
        {
            cout << "too high\n";
        }
        else
        {
            cout << "CORRECT GUESS with : " << tries << " tries\n";
        }

    } while ( guess != num);

    cout << "------------------------------------------------\n ";
    
    return 0;
}