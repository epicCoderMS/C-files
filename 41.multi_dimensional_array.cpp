// 2d array == stroe data in format of rows  and cols
// syntax : data type array_nm [rows][cols] = values
                                // rows are optional but cols needed to specify
#include<iostream>
using namespace std;

int main()
{
    string cars[][3] = {
                        { "tata" , "ford" , "mustang"},
                        { "mahindra" , "thar" , "scorpio"},
                        { "john dere" , "farmtrac" , "swaraj"}
                       };
   // cout << cars[0][1] << "  ";

   int rows = sizeof(cars)/sizeof(cars[0]);
   int cols = sizeof(cars[0])/sizeof(cars[0][0]);

   for (int i = 0; i < rows; i++)
   {
        for (int j = 0; j < cols; j++)
        {
            cout << cars[i][j] << " ";
        }
    cout << '\n';
   }
   
    return 0;
}