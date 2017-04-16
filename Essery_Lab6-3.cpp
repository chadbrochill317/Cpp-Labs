#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <vector>

using namespace std;
/*
int randomNumber(int x){
    int stuff [100];
    for(int i = 0; i <= x; i++){
        int y = rand() % 100 + x;
        stuff[i] = y;
    }
    return stuff[100];
}


int calculateAverage(int number[100], int x){
    int sum = 0;
    int average = 0;
    for (int i=0; i<=x; i++) {
        sum = sum + number[i];
    }
    average = sum/x;
    return average;
}


void display(int x, int y, int number[100]) {
    cout << "Average = " << y;
    for (int i = 0; i<=x; i++){
        if (number[i]>y){
            cout << number[i] << " -- higher than average" << endl;
        }else {
            cout << number [i] << " -- lower than average" << endl;
        }
    }
}
*/

int main ()
{
int a;
int average;
cout << "Enter a Number: " << endl;
cin >> a;
int number [100];
for(int i = 0; i <= a; i++){
    int y = rand() % 100 + 1;
    number[i] = y;
}
int sum = 0;
for (int i=0; i<=a; i++) {
    sum = sum + number[i];
}
average = sum/a;
cout << "Average = " << average << endl;
for (int i = 0; i<=a; i++){
    if (number[i]>average){
        cout << number[i] << " -- higher than average" << endl;
    }else {
        cout << number [i] << " -- lower than average" << endl;
    }
}
//number = randomNumber(a);
//average = calculateAverage(number[100], a);

}
