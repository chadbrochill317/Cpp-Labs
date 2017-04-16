#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

void swap (int &x, int &y){
    int temp = 0;
    temp = x;
    x = y;
    y = temp;
}

int main ()
{
    int x = 10;
    int y = 20;
    swap (x, y);
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
}
