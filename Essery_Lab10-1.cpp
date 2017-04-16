#include <iostream>
#include <iomanip>
using namespace std;

struct Part {      // Global structure
   string partNo;
   string partName;
   double price;
};

/** function that displays the menu and returns the choice
 *  @return the choice entered by the user
 */
int menu (){
  cout << "Choose a Something from the Menu Below: " << endl;
  cout << "1. Add a new part" << endl;
  cout << "2. Find the price for a particular part" << endl;
  cout << "3. Exit" << endl;
  int choice;
  cin >> choice;
  return choice;
}

/** function then gets info for a new part from the user and
 *  appends it to the array
 *  @param parts, a pointer to an array of Parts
 *  @param size, the size of the array of Parts
 */
void newpart (Part* parts, int &size){
  string tempNumber;
  string tempName;
  double tempPrice;
  cout << "Enter new part number: " << endl;
  cin >> tempNumber;
  cout << "Enter new part name: " << endl;
  cin >> tempName;
  cout << "Enter new part price " << endl;
  cin >> tempPrice;


  parts[size].partName = tempName;
  parts[size].partNo = tempNumber;
  parts[size].price =tempPrice;
  size++;

}

/** function then asks the user for a part no. and
 *  finds the part in the array and returns its index
 *  @param parts, a pointer to the array of Parts
 *  @param size, the size of the array of Parts
 *  @return the position of the particular part in the array,
 *          returns -1 if the part is not found
 */
int find (Part* parts, int size){

  string temp;
  cout << "Enter part number you would like to look up: " << endl;
  cin >> temp;

  for(int i=0; i<= size; i++){
    if(parts[i].partNo == temp){
      return i;
    }
  }
  return -1;
}

/** function then prints the info relevant to a particular part
 *  @param parts, a pointer to the array of Parts
 *  @param pos, the index of the particular part
 */
void print (Part* parts, int pos){
  cout << "Part Number: " << parts[pos].partNo << endl;
  cout << "Part Name: " << parts[pos].partName << endl;
  cout << "Part Price: " << parts[pos].price << endl;
}

int main(){

   int n = 10;
   Part* parts = new Part[n]; //a dynamicaly allocated array of structures
   int size = 0;
   int choice;
   do {
     choice = menu();
     switch (choice){
       case 1: newpart (parts, size); break;
       case 2: {int pos = find (parts, size);
                if (pos == -1) cout << "not found\n"<< endl;
                else print (parts, pos); break;}
       default: break;
     }
     //for(int i = 0; i<size; i++)
     //   print(parts, i);
   } while (choice != 3);
}
