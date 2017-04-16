#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;
    int array [size];
    for (int i = 0; i < size; i++){
        cout << "Enter number " << i << " for array: ";
        cin >> array[i];
    }
    for (int start = 0; start < size; start++){
        int small = start;
        for (int current = start +1; current < size; current ++) {
            if(array[current] < array[small]){
                small = current;
            }
        swap(array[current], array[small]);
        }
    }
    for(int x = 0; x < size; x++){
        cout << array[x] << endl;
    }

}
