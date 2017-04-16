#include <iostream>

using namespace std;

double* maximum (double* a, int size) {
    double *x = a;
    for (int i=1; i<5; i++){
        if(a[i] > *x){
            x = &a[i];
        }
    }
    return x;
}

int main(){
    double data[] = { 1, -4, 35, 9, 26 };
    double* max = maximum(data, 5);
    cout << *max << endl;       // should print 35

}
