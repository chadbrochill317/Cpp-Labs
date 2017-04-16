#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

int sumDivisors (int number){
    int sum;
    int divide;

    for (int i = 1; i<=number; i++){
        divide = number%i;
        if (divide == 0){
            sum = sum + i;
        }
    }
    return sum;
}

int main()
{
int x;
int answer;

cout << "Enter a number: " << endl;
cin >> x;

answer = sumDivisors(x);

cout << "The Sum of the Divisors is: " << answer << endl;
}
