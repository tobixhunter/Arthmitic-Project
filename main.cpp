/*
Daniel Guardiola
COSC 1436
V60 Programming Fundamentals 1
Arithmetic Operations
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;

void DisplayMenu();
int ShowChoice();
int NumberInput(int number1, int number2);



int main()
{
  int choice;
  int number1;
  int number2;
  int total;

  do
  {
        DisplayMenu(); //function call
        choice = ShowChoice();

        switch(choice)
        {
        case 1:
            total = number1 + number2;
            cout <<number1 <<" + " <<number2 <<" = " <<total;
            break;

        case 2:
           total = number1 - number2;
           cout <<number1 <<" - " <<number2 <<" = " <<total;
            break;

        case 3:
           total = number1 * number2;
           cout <<number1 <<" * " <<number2 <<" = " <<total;
            break;

         case 4:
           total = number1 / number2;
           cout <<number1 <<" / " <<number2 <<" = " <<total;
            break;
        }

        system("pause");
        system("cls");

  }while( choice != 5);
    return 0;
}
void DisplayMenu()
{
  cout <<"Choose your operation" <<endl;
  cout <<"----------------------" <<endl;
  cout <<"1) Addition + " <<endl;
  cout <<"2) Subtraction - " <<endl;
  cout <<"3) Multiplication * " <<endl;
  cout <<"4) Division / " <<endl;
  cout <<"5) Quit " <<endl;
}
int ShowChoice()
{
   int choice;
   cout <<"Enter a choice [1-5]: ";
   cin >> choice;
   cin.ignore();
   return choice;
}
int NumbersInput(int n1, int n2 )
{
    cout <<"Enter Number 1: ";
    cin >> n1;

    cout <<"Enter Number 2: ";
    cin >> n2;

 return 0;
}










