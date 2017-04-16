#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

main()
{
int x = rand() % 100 + 1;
const int y = 8;

cout << "The Random Number is: "<< x << endl;

for (int i = 1; i <= x; i++){
    cout << setw(4)<<i;
      if ((i + 1) % 8 == 0) {
         cout << endl;
  }
}
}
