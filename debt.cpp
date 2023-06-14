
#include <iostream>
#include <iomanip>

using namespace std;

struct Debt {
  int debtAmount;
  int monthsToPay;
  int interestPercentage;
};

int main() {
  // Ask the user for the debt amount, months to pay, and interest percentage.
  Debt debt;
  cout << "Enter the debt amount: ";
  cin >> debt.debtAmount;
  cout << "Enter the number of months to pay: ";
  cin >> debt.monthsToPay;
  cout << "Enter the interest percentage: ";
  cin >> debt.interestPercentage;

  // Calculate the monthly payment.
  int monthlyPayment = debt.debtAmount / debt.monthsToPay;

  // Create a new table to display the debt, months, and interest paid.
  cout << "| " << setw(10) << "Months" << " | " << setw(10) << "Cuota" << " |" << endl;
  for (int month = 1; month <= debt.monthsToPay; month++) {
    cout << setw(10) << month << " | " << setw(10) << monthlyPayment << " |" << endl;
    debt.debtAmount -= monthlyPayment;
  }

  return 0;
}
