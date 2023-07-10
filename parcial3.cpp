#include <iostream>
#include <cmath> 
#include <fstream>
using namespace std;

double rad(double angulo) {
  return angulo * M_PI / 180;
}

double ang(double rad) {
  return rad * 180 / M_PI;
}

double senlaw(double la, double lb, double angb) {
  return la * sin(angb) / lb;
}

double coslaw(double l1, double l2, double ang3) {
  return sqrt(pow(l1,2) + pow(l2,2) - 2 * l1 * l2 * cos(ang3));
}

void calcular (double l1,double l2, double l3, double ang1, double ang2, double ang3) {
  l3 = coslaw(l1, l2, ang3);
  ang1 = senlaw(l1, l3, ang3);
  ang2 = senlaw(l2, l3, ang3);

  ofstream outfile("datos.txt");
  outfile << "3 2 120\n";
  outfile << "l1 l2 ang3\n\n";
  outfile << l3 << " " << ang(ang1) << " " << ang(ang2) << endl;
  outfile << &l3 << " " << &ang1 << " " << &ang2 << endl;
  outfile << "l3 ang1 ang3\n";
  // Close the file.
  outfile.close();
}

struct elementos {
    double l1 = 3;
    double l2 = 2;
    double l3;
    double ang1;
    double ang2;
    double ang3 = rad(120);
};

int main() {
  elementos triangulo;
  ofstream outfile("datos.txt");
  outfile << "3 2 120\n";
  outfile << "l1 l2 ang3\n\n";
  outfile.close();

  double *l3 = &triangulo.l3;
  double *ang1 = &triangulo.ang1;
  double *ang2 = &triangulo.ang2;
  
  calcular(triangulo.l1,triangulo.l2, *l3, *ang1, *ang2, triangulo.ang3);

  return 0;
}
