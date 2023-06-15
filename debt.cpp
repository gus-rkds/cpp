/* 
Este programa calcula los plazos y montos respectivos para pagar una deuda dados el monto, porcentaje de interes y meses
da uso principalmente de estructuras para guardar las variables e incluye algunos metodos. 
Elaborado por Gustavo Alviarez para la materia de Programación 1 USM
Rev 0
 */

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
  // totales
  float tPer = 0;

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
  bool run = true;
  char close;
  /*
  d.iDebt = 400;
  d.iTime = 4;
  d.iPer = 4;
  */

  cout << "Enter the debt amount: ";
  cin >> d.iDebt;
  cout << "Enter the number of months to pay: ";
  cin >> d.iTime;
  cout << "Enter the interest percentage: ";
  cin >> d.iPer;

  float staticDebt = d.iDebt;
  int tInt = d.iTime;

  cout << endl << "La siguiente tabla muestra el calculo para pagar una deuda de " << d.iDebt << "$ en " << d.iTime << " meses con " << d.iPer << "% de interes" << endl << endl; 

  // ---------------TABLE -------------------//

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
    d.tPer += d.mPer;
    if (d.iDebt <= 1) {
      d.iDebt = 0;
    } 
    // columns
    d.addCol(4, month);
    d.addCol(8, d.mFee);
    d.addCol(8, d.mPer);
    d.addCol(8, d.mPaid);
    d.addCol(9, d.iDebt);
    cout << endl;
  }

  cout << endl << endl << "Para pagar la deuda se necesitaron " << d.iTime << " meses y se pago " << d.tPer << " de interes para cancelar la deuda de " << staticDebt << "$"<< endl;

  return 0;
}

