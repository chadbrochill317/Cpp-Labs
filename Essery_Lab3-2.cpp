#include <iostream>
#include <cmath>

using namespace std;

main()
{
     char letter;
     char num;
     char num2;
     char num3;

     cout << "Enter First Letter of Month: " << endl;
     cin >> letter;
     switch (letter) {
          case 'J':
          cout << "Type 1 if January, Type 2 if June, Type 3 if July: ";
          cin >> num;
          switch(num) {
                case '1':
                     cout << "January has 31 days";
                     break;
                case '2':
                     cout << "June has 30 days";
                     break;
                case '3':
                     cout << "July has 31 days";
                default:
                     cout << "Invalid Number";
                     }
                break;
          case 'F':
               cout << "February has 28 days";
               break;
          case 'M':
               cout << "Type 1 if March, Type 2 if May";
               cin >> num2;
               switch(num2) {
                    case '1':
                         cout << "March has 31 days";
                         break;
                    case '2':
                         cout << "May has 31 Days";
                         break;
                    default:
                         cout << "Invalid Number"; break;
                         }
                break;
          case 'A':
               cout << "Type 1 if April, Type 2 if August";
               cin >> num3;
               switch(num3) {
                    case '1':
                         cout << "April has 30 Days";
                         break;
                    case '2':
                         cout << "August has 31 Days";
                         break;
                    default:
                         cout << "Invalid Number";
                }
            break;
          case 'S':
               cout << "September has 30 days";
               break;
          case 'O':
               cout << "October has 31 days";
               break;
          case 'N':
               cout << "November has 30 days";
               break;
          case 'D':
               cout << "December has 31 days";
               break;
          default:
               cout << "Invalid Letter";
               break;
               }
}
