#include<iostream>
#include<iomanip> // header file to set some precision for floating points

using namespace std;

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        cout << "~~~~~~~~~~~~~~~~~~~~\n";
        cout << "enter your choice : \n";
        cout << "~~~~~~~~~~~~~~~~~~~~\n";
        cout << "1. show balance\n";
        cout << "2. deposit money\n";
        cout << "3. withdraw money\n";
        cout << "4. EXIT\n";
        cin >> choice;

        cin.clear(); // Clear the error flag
        cin.ignore();
        fflush(stdin); 
            
        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
    
        case 2:
            balance +=  deposit(); // balance = balance + deposit();
            showBalance(balance);
            break;
    
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);     
            break;
    
        case 4:
            cout << " thanks for visiting\n";
            break;

        default:
            cout << "INVALID CHOICE\n";
            break;
        }
    } while (choice != 4);
    
 
    return 0;
}

void showBalance(double balance){
    cout << " your balance is :" << setprecision(2) << fixed << balance << " Rs\n\n";
}

double deposit(){

    double amount = 0;

    cout << "Enter amount to deposit : ";
    cin >> amount;
    
    if (amount > 0)
    {
        return amount;
    }
    else
    {
        cout << " **ENTER ONLY VALID AMOUNT**\n";
        return 0;
    }
    
   
}

double withdraw(double balance){

    double amount = 0;

    cout << " Enter amount to be withdrawn :";
    cin >> amount;

    if ( amount > balance) 
    {
        cout << " insufficient funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        cout << " that's NOT VALID AMOUNT\n";
        return 0;
    }
    else{
        return amount;
    }
}
