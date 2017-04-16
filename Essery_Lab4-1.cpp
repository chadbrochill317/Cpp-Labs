#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>

using namespace std;

main()
{
string x = "x";
string sentence;
int number = 0;

cout << "Please enter a sentence: " << endl;
//cin >> sentence;
getline(cin, sentence);
for (int i=0; i < sentence.length(); i++) {
     if(sentence.substr(i, 1) == x){
          number ++;
     }
}

cout << "Output is: " << number << endl;
}
