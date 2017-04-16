#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

void display (int n, char direction){
    int print = 1;
    char x = '*';

    if (direction == 'i'){
        for(int i=0; i<=n; i++){
            int counter = i;
            while (counter > 0){
                cout << x;
                counter --;
            }
            cout << endl;
        }
    }else{
            int g = n;
            for (int i=0; i<=n; i++){
                int counter = g;
                while (counter > 0){
                    cout << x;
                    counter --;

                }
                cout << endl;
                g --;
            }
        }
    return;
}

int main()
{
char y;
int z;

cout << "Enter i for Down, Enter d for Up: ";
cin >> y;
cout << "Enter Length: ";
cin >> z;

display (z, y);
}
