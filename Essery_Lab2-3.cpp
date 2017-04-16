#include <iostream>
#include <cmath>

using namespace std;

main()
{
     double expense;
     double monthly;
     double save;

     string name;
     cout << "Enter Family Name: ";
     cin >> name;
     int people;
     cout << "Enter number of family members: ";
     cin >> people;
     double income;
     cout << "Enter Annual income: ";
     cin >> income;
     double debt;
     cout << "Enter total Debt: ";
     cin >> debt;

     expense = 3000 * people;
     monthly = debt / 12;
     save = (income-debt) * 0.02;

     cout << "Family Budget" << endl;
     cout << "Name: " << name << ", Number of People: " <<people<< ", Income: " <<income<< ", Debts: "<<debt<< endl;
     cout << "Predicted Expenses: "<< expense << endl;
     cout << "Monthly Payments: "<< monthly << endl;
     cout << "Amount to Save: " << save << endl;
}
