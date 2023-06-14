
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

  // Create a table to display the debt, months, and interest paid.
  cout << "| Month | Monthly Fee | Interest Paid | Requested Amount Paid | Resting Debt |" << endl;
  for (int month = 1; month <= debt.monthsToPay; month++) {
    cout << setw(10) << month << " | " << setw(10) << debt.debtAmount - debt.debtAmount * debt.interestPercentage / 100 / debt.monthsToPay << " | " << setw(10) << debt.interestPercentage * debt.debtAmount / 100 << " | " << setw(10) << monthlyPayment - debt.interestPercentage * debt.debtAmount / 100 << " | " << setw(10) << debt.debtAmount - monthlyPayment << " |" << endl;
    debt.debtAmount -= monthlyPayment;
  }

  return 0;
}
