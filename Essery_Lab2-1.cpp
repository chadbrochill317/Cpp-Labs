#include <iostream>
#include <cmath>

using namespace std;

main()
{
    int y;
    int x;
    int l;
    double answer;
    double z;
    double hold;

    cout << "Enter Number for y: ";
    cin >> y;
    cout << "Enter Number for l: ";
    cin >> l;
    cout << "Enter Number for x: ";
    cin >> x;

    z = y - l;

    answer = pow(z, 2.0) + pow(x, 2.0);

    hold = sqrt(answer);

    cout << "The Answer is " << hold;

}
