#include <iostream>
#include <iomanip>

using namespace std;

  void getMat(double mat[][5], int size){
    cout << "enter " << size << " by " << size << " numbers: \n";
    for (int i=0; i<size; i++)
      for (int j=0; j<size; j++)
        cin >> mat[i][j];
  }

  void mult_mat(double a[][5], double b[][5], double c[][5]){
      for (int i  = 0; i<5; i++){
          for (int x = 0; x<5; x++){
              c[i][x] = a[i][x] * b[i][x];
          }
      }
  }

  bool zeroDiagonal (double a[][5], int n){
      bool answer = false;
      for (int i = 0; i<n; i++){
           int temp = a[i][i];
           if(temp != 0){
               answer = false;
               return answer;
           }else {
               answer = true;
           }
           }
        return answer;
      }

  void add_mat(double a[][5], double b[][5], double c[][5], int size){
    for (int i=0; i<size; i++)
      for (int j=0; j<size; j++)
        c[i][j] = a[i][j] + b[i][j];
  }

  void printMat(double a[][5], int size){
    for (int i=0; i<size; i++){
      for (int j=0; j<size; j++)
        cout << setw(4) <<a[i][j];
      cout << endl;
    }
  }

  void printMult(double c[][5], int size){
      for (int i=0; i<size; i++){
          for (int j=0; j<size; j++){
              cout << setw(4) << c[i][j];
          }
      }
  }

  int main (){
    double a[5][5];
    double b[5][5];
    double c[5][5];

    bool answer;

    cout <<"enter size for the square matrix: ";
    int n;
    cin >> n;
    getMat (a, n);
    getMat (b, n);
    add_mat (a, b, c, n);
    mult_mat(a,b,c);
    cout << "\nAddition: \n";
    printMat(c,n);
    cout << "\nMultiplication: \n";
    printMult(c, n);
    cout << "\nIs the Diaganol Zeros: \n";
    answer = zeroDiagonal(c, n);
    cout << answer;

  }

