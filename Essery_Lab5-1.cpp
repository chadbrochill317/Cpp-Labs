#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

bool distinct (int a, int b, int c){
    if (a != b && b != c && c != a){
        return true;
    }else {
        return false;
    }
}

main()
{
int x;
int y;
int z;
bool different;

cout << "Please Enter First Number: " << endl;
cin >> x;
cout << "Please Enter Second Number: " << endl;
cin >> y;
cout << "Please Enter Third Number: " << endl;
cin >> z;

different = distinct(x, y, z);

if (different == true){
    cout << "The Numbers are Distinct!" << endl;
}else {
    cout << "The Numbers are the Same" << endl;
}

}
