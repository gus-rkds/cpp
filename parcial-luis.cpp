#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

void ecuaciones (int letra,float* al, float* v1, float* v2) {
  // numero random
  srand(time(NULL));
  float aleatorio = (-11+ rand()%88);
  aleatorio = aleatorio / 10;
  float valor1 = M_PI * letra * aleatorio;
  float valor2 = (4 / 3) * M_PI * pow(aleatorio, 3) / letra;
  *al = aleatorio;
  *v1 = valor1;
  *v2 = valor2;
}

int main() {

  // pedir al usuario la frase
  string frase;
  cout << "ingresa una frase de minimo 2 palabras: ";
  getline(cin, frase);
  // contar letras e
  int contador = 0;
  for (char letra : frase) {
  if (letra == 'e') {
    contador++;
  }
  }

  // guardar variables en pointer

  float aleatorio;
  float valor1;
  float valor2;


  ecuaciones(contador, &aleatorio,&valor1, &valor2);

  cout << "la frase ingresada fue: " << frase << endl;
  cout <<"contador de letras e: " << contador << endl;
  cout <<"numero aleatorio: "<< aleatorio << endl;
  cout <<"valor1: "<< valor1<< endl; 
  cout <<"valor2: "<< valor2<< endl;


  return 0;
}
