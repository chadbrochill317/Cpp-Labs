#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

main()
{
int number1 = 0;
int number2 = 0;

cout << "Enter Integer n: " << endl;
cin >> number1;
cout << "Enter Number m: " << endl;
cin >> number2;

for (int i = 0; i < number1; i++){
     int answer = 0;
     for (int t = 0; t < number2; t++){
          int num = 0;
          cout << "Enter number "<<t<< endl;
          cin >> num;
          answer = answer + num;
     }
     cout << "The Sum is: "<< answer << endl;
}

}
