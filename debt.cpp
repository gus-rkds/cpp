#include <iostream>
#include <iomanip>

using namespace std;

struct Debt {

  // initial var
  double iDebt;
  int iTime;
  double iPer;
  // table vars
  double mFee;
  double mPer;
  double mPaid;
  double mDebt;
  double mXPay;
  double mTotalDebt;
};

int main() {
  // Ask the user for the debt amount, months to pay, and interest percentage.
  Debt debt;
  cout << "Enter the debt amount: ";
  cin >> debt.iDebt;
  cout << "Enter the number of months to pay: ";
  cin >> debt.iTime;
  cout << "Enter the interest percentage: ";
  cin >> debt.iPer;

  // Calculate the monthly payment.
  debt.mFee = debt.iDebt / debt.iTime;

  // Create a new table to display the debt, months, and interest paid.
  cout << setw(6) << "Months" << " | " << setw(10) << "Cuota" << " |" << endl;
  for (int month = 1; month <= debt.iTime; month++) {
    cout << setw(6) << month << " | " << setw(10) << debt.mFee << " |" << endl;
    debt.iDebt -= debt.mFee;
  }

  return 0;
}
