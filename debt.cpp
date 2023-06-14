#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Debt {

  // initial vars
  float iDebt;
  float iTime;
  float iPer;
  // table vars
  float mFee;
  float mPer;
  float mPaid;
  float mDebt;
  float mXPay;
  float mTotalDebt;

  // methods
    // table format
    void addCol (int w, string d) {
      cout << setw(w) << d << " |";
    }

    void addCol (int w, float value){
      cout << setw(w) << value << " |";
    }
};

int main() {
  // Ask the user for the debt amount, months to pay, and interest percentage.
  Debt d;
  d.iDebt = 400;
  d.iTime = 4;
  d.iPer = 4;
  /*
  cout << "Enter the debt amount: ";
  cin >> d.iDebt;
  cout << "Enter the number of months to pay: ";
  cin >> d.iTime;
  cout << "Enter the interest percentage: ";
  cin >> d.iPer;
  */


  // Create a new table to display the debt, months, and interest paid.
  
  // header
  d.addCol(4, "Mes");
  d.addCol(7, "Cuota");
  d.addCol(8, "Interes");
  d.addCol(8, "Pagado");
  cout << endl;

  for (int month = 1; month <= d.iTime; month++) {

    // prev calculation
    d.mFee = d.iDebt / d.iTime;
    d.mPer = (d.iDebt * d.iPer) / 100; 
    d.mPaid = d.mFee - d.mPer;

    // columns
    d.addCol(4, month);
    d.addCol(7, d.mFee);
    d.addCol(8, d.mPer);
    d.addCol(8, d.mPaid);
    
    // post calculation
    d.iDebt -= d.mPaid;
    cout << endl;
  } 

  return 0;
}

