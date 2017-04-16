#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main ()
{
int length = 7;
string day [length] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

for(int i=0; i<length; i++){
    cout << day [i] << endl;
}
}
