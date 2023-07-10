#include <iostream>
#include <ctime>

using namespace std;

int main() {

  // numero random
   srand(time(NULL));
   float aleatorio = (-11+ rand()%88);
   aleatorio = aleatorio / 10;

  // pedir al usuario la frase
  string frase;
  cout << "ingresa una frase de minimo 2 palabras: ";
  getline(cin, frase);

  int contador = 0;
  for (char letra : frase) {
  if (letra == 'e') {
    contador++;
  }
  }

  cout <<"contador: " << contador << " aleatorio: " << aleatorio << endl;

  return 0;
}
