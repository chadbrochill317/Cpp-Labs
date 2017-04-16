#include <iostream>
#include <cmath>

using namespace std;

main()
{

     int money;
     int answer;
     int leftover;

     cout << "Enter Amount of Money: ";
     cin >> money;

     answer = money / 85;
     leftover = money % 85;

     cout << "You can buy " <<answer<< " stamps and have" <<leftover<< " leftover";

}
