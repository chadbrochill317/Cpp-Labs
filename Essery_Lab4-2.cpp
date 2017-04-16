#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

main()
{
bool match = false;
int number1 = 0;
int number2 = 1;
int hold = 0;

while (number1 != number2){
    cout << "Enter a number: " << endl;
    cin >> number2;
    if (number2 == number1){
         cout << "They Match";
    }else {
         cout << "Enter another number: " << endl;
         cin >> number1;
    }


}

}

