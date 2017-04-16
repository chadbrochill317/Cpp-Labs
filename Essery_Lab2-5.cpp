#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int y;
    int l;
    int x;

    cout << "Enter Number for y: ";
    cin >> y;
    cout << "Enter Number for l: ";
    cin >> l;
    cout << "Enter Number for x: ";
    cin >> x;

    if (y > l){
         if (y > x){
             cout << "y is the greatest number";
    }
    }
    if (l > x){
         if (l > y){
              cout << "l is the greatest number";
         }
    }
    if (x > y){
         if (x > l){
              cout << "x is the greatest number";
         }
    }
}
