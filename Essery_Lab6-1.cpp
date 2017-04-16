#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

/*int sum (int n) {
    int answer = 0;
    for(int i = 0; i <= n; i++){
        answer = answer + i;
    }
    return answer;
}


int sum (int n, int answer, int i){
    answer = answer + i;
    i++;
    if(i<n){
        sum(n, answer, i);
    }
}
*/

int sum (int n){
    if(n>1) {
        return n + sum(n-1);
    }else {
        return 1;
    }
}

int main ()
{
int x;
int final;
int i = 0;
int answer = 0;

cout << "Enter a number: " << endl;
cin >> x;

//final = sum(x, answer, i);
final = sum (x);

cout << "The Sum of the integers from 1 to your inputted number is: " << final << endl;
}
