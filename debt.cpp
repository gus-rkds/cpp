#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

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
      cout << setprecision(4) << setw(w) << d << " |";
    }

    void addCol (int w, float value){
      cout << setprecision(4) << setw(w) << value << " |";
    }

  
};

int main() {
  // Ask the user for the debt amount, months to pay, and interest percentage.
  Debt d;
  d.iDebt = 400;
  float staticDebt = d.iDebt;
  d.iTime = 4;
  int tInt = d.iTime;
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
  d.addCol(8, "Cuota");
  d.addCol(8, "Interes");
  d.addCol(8, "Pagado");
  d.addCol(9, "Restante");

  cout << endl;

  for (int month = 1; month <= d.iTime; month++) {

    // prev calculation
    
    d.mPer = d.iDebt * d.iPer / 100; // porcentaje para mes actual
    d.mFee = (staticDebt * d.iPer /100) / (1 - pow (1 + d.iPer / 100, -d.iTime));
    // d.mFee = d.mPer / (1 - pow(1 + d.iPer, d.iTime));
    d.mPaid = d.mFee - d.mPer; // monto pagado tomando en cuenta el interes
    d.iDebt -= d.mPaid;
    if (d.iDebt <= 1) {
      d.iDebt = 0;
    } 
    // columns
    d.addCol(4, month);
    d.addCol(8, d.mFee);
    d.addCol(8, d.mPer);
    d.addCol(8, d.mPaid);
    d.addCol(9, d.iDebt);
    
    // post calculation
    cout << endl;
  } 

  return 0;
}

