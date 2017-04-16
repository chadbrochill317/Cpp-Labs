#include <iostream>
#include <iomanip>
//#include <conio.h>
#include <vector>

using namespace std;

/**
   A simulated cash register that tracks the item count and
   the total amount due.
*/
class CashRegister2{

private:
   int item_count;
   double total_price;
   vector<double>itemPrices;

public:

   /**
      Constructor.
   */
   CashRegister2();                          // default constructor
   CashRegister2(int items, double price);   // overloading
   /**
      Adds an item to this cash register.
      @param price the price of this item
   */
   void addItem(double price);

   /**
      @return the total amount of the current sale
   */
   double get_total() const;

   /**
      @return the item count of the current sale
   */
   int get_count() const;

   /**
      Displays the contents of the cash register.
   */
   void display_all() const;

   /**
      @return the total amount of the current sale
   */

   void clear();
};

CashRegister2::CashRegister2(){
   item_count = 0;
   total_price = 0;
}

CashRegister2::CashRegister2(int items, double price){
   item_count = items;
   total_price = price;
}

void CashRegister2::addItem(double price){
   itemPrices.push_back(price);
}

double CashRegister2::get_total() const{
   double total;
   for(int i=0; i < itemPrices.size(); i++){
      total =total + itemPrices[i];
   }
   return total;
}

int CashRegister2::get_count() const{
   return itemPrices.size();
}

void CashRegister2::display_all() const{
   cout << itemPrices.size() << endl;
   cout<< get_total() << endl <<endl;
for(int i=0; i < itemPrices.size(); i++){
   cout << itemPrices[i] << endl;
     }
}

void CashRegister2::clear() {
   itemPrices.clear();
}


int main(){
    CashRegister2 cash1;
    CashRegister2 cash2;

    cash1.addItem(1.99);
    cash1.addItem(5.99);
    cash2.addItem(10.99);
    cash2.addItem(20);
    cash2.addItem(17.5);

    cout << "Cash1:\n";
    cash1.display_all();
    cash1.clear();

    cout << "Cash2:\n";
    cash2.display_all();
    cash2.clear();
  }

