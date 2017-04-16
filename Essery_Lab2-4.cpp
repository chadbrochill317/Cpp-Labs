#include <iostream>
#include <cmath>

using namespace std;

main()
{
     int item1;
     int item2;
     char coupon;
     double answer;
     double const discount = 0.1;
     double holder;

     cout << "Enter Item 1";
     cin >> item1;
     cout << "Enter Item 2";
     cin >> item2;

     cout << "Do you have a coupon?";
     cin >> coupon;

     if (coupon == 'Y'){
          answer = item1 + item2;
          holder = answer * discount;
          answer = answer - holder;
     } else {
          answer = item1 + item2;
     }

     cout << "Your total is: "<<answer;
}
