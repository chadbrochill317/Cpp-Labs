#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double y;
    double x;
    double l;
    double answer;
    double z;

    cout << "Enter Number 1: ";
    cin >> y;
    cout << "Enter Number 2: ";
    cin >> x;
    cout << "enter Number 3: ";
    cin >> l;
    z = y - l;

    pow(z, 2);
    pow(x, 2);
    answer = z + x;

    sqrt(answer);

    cout << "The Answer is " << answer;

}
