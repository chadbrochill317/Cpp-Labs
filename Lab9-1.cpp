#include <iostream>

using namespace std;

void sort (double* p, double* q) {
    double swap;
    if (*p > *q){
        swap = *q;
        *q = *p;
        *p = swap;
    }//else {
       // swap = *p;
        //*p = *q;
        //*q = swap;
    //}
}
//
int main(){
   double x = 500;
   double y = 22;
   sort (&x, &y);
   cout << "x = " << x << "\ny = " << y; //should print 22 then 500
}

