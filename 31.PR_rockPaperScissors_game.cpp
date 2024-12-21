#include<iostream>
// #include<ctime>
using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice( char choice);
void chooseWinner(char player , char computer);


int main()
{
    char player;
    char computer;

    player = getUserChoice();
    cout << "your choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "computer's  choice : ";
    showChoice(computer);

    chooseWinner(player , computer );

    return 0;
}

char getUserChoice(){

    char player;
    cout << "~~~~~~~~~~~~~~~~ Rock-Paper-Scissors Game ~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    do
    {
        cout << " choose one of the following\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << " 'r' for rock\n";
        cout << " 'p' for paper\n";
        cout << " 's' for scissors\n";
        cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    

    return player;
}

char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1: return 'r';
        

    case 2: return 'p';
        

    case 3: return 's';
        
    default:
        break;
    }
    return 0;
}

void showChoice( char choice){
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;

    case 'p':
        cout << "Paper\n";
        break;

    case 's':
        cout << "Scissors\n";
        break;
    
    default:
        break;
    }
}

void chooseWinner(char player , char computer){
    switch (player)
    {
    case 'r':
            if (computer == 'r')
            {
                cout << " it's a TIE\n";
            }
            else if (computer == 'p')
            {
                cout << " you LOOSE \n";
            }
            else{
                cout << " you WIN!\n";
            }
        break;

    case 'p':
            if (computer == 'r')
            {
                cout << " you WIN!\n";
            }
            else if (computer == 'p')
            {
                cout << " it's a TIE \n";
            }
            else{
                cout << " you LOOSE!\n";
            }
        break;

    case 's':
            if (computer == 'r')
            {
                cout << " you LOOSE!\n";
            }
            else if (computer == 'p')
            {
                cout << " you WIN!\n";
            }
            else{
                cout << " it's a TIE !\n";
            }
        break;
 
    default:
        break;
    }
}