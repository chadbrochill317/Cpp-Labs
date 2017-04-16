#include <iostream>
#include <cmath>

using namespace std;

main()
{
     const int randomNum = 50;
     int guess = 0;
     int counter = 0;

     while (guess != randomNum){
          cout << "Enter a guess: ";
          cin >> guess;
          if (guess < randomNum){
               cout << "Too Low" << endl;
          }else if (guess > randomNum){
               cout << "Too High" << endl;
          }
          counter ++;
     }
     cout << "It Took you " << counter << " guess";

}
