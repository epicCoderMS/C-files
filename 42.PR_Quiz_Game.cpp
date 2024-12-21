#include<iostream>
using namespace std;

int main()
{
    string questions[] = {  "1. which year c++ was created? :",
                            "2. who invented c++? :",
                            "3. what is the predecessor of c++? :",
                            "4. is earth flat? :"};

    string options [][4] = {
                           {"A. 1969" ,"B. 1975" ,"C. 1985" ,"D. 1989" },
                           {"A. GUIDO VAN" ,"B. BJARNE STROUSTRUP" ,"C. JOHN WICK" ,"D. ELON MUSK" },
                           {"A. C" ,"B. C+" ,"C. C--" ,"D. C#" },
                           {"A. YES" ,"B. NO" ,"C. MAYBE" ,"D. WHAT IS EARTH?" }
                           };
    char answerKey[] = {'C' ,'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < size; i++)
    {
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< '\n';
        cout << questions[i] << '\n';
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<< '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++)
        {
            cout << options[i][j] << '\n';

        }
        cin >> guess;
        guess = toupper(guess);

        if (guess == answerKey[i])
        {
            cout << "CORRECT! \n";
            score++;
        }
        else{
            cout << "WRONG!\n";
            cout << " answer is :" << answerKey[i] << '\n';
        }
        
    }
    cout << "--------------------------------------\n";
    cout << " **            RESULT               **\n";
    cout << "--------------------------------------\n";
    cout << "CORRECT GUESS :" << score << '\n';
    cout << "# of questions :" << size << '\n';
    cout << "SCORE :" << (score/(double)size)*100 << "%" <<'\n';
    return 0;
}