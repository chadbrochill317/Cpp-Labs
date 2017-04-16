#include <iostream>

using namespace std;

int * getdata (int & size){
  cout << "Enter Size: " << endl;
  cin >> size;
  cout << "Size = " << size << endl;
  int * arr = new int[size];
  for(int i = 0; i < size; i++){
    cout << "Enter Data Point " << i+1 << " for Array: " << endl;
    cin >> arr[i];
  }
  cout << "Return Array" << endl;
  return arr;
}

int main(){
  int size;
  int * p = getdata (size);
  for (int i=0; i<size; i++)
    cout << p[i] << " ";
  delete[] p;

}
