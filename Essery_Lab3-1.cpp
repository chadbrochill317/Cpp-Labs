#include <iostream>
#include <cmath>

using namespace std;

main()
{
     bool x;
     bool y;
     bool z;

     int number1;
     int number2;
     int number3;

     cout <<  "Please enter Number 1: " << endl;
     cin >> number1;
     cout << "Please enter Number 2: " << endl;
     cin >> number2;
     cout << "Please enter Number 3: " << endl;
     cin >> number3;

     if (number1 > number2 && number2 > number3)
     {
          cout << "Decrease: " ;//<< number1 << number2 << number3;
     }else if (number3 > number2 && number2 > number1)
     {
          cout << "Increase: " ;//<< number1 << number2 << number3;
          }else{
               cout << "Random";
     }
     /*
     if (number2 > number1 && number1 > number3)
     {
          cout << "Random: " << number2 << number1 << number3;
     }
     if (number2 > number3 && number2 > number1)
     {
           cout << "Random: " << number2 << number3 << number1;
     }
     */
}
