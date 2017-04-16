#include <iostream>
#include <cmath>

using namespace std;

main()
{
     int num;
     int counter;
     int answer = 0;

     cout << "Enter Number: ";
     cin >> num;
     counter = num;

     while (counter > 0) {
          int nip;
          nip = counter * counter;
          answer = answer + nip;
          counter --;
     }

     cout << "The Sum of Squares is: " << answer;
}
