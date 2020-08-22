//Programa para retornar a soma de 'a' e 'b';
//Yasmin Alves
//10.07.2020

#include <iostream>

using namespace std;

float somaDeFloats(float a, float b);//declara função para a soma de floats

int main() {
  float a, b;

  cout << "Digite o valor de 'a': ";
  cin >> a;
  cout << "Digite o valor de 'b': ";
  cin >> b;

  float soma = somaDeFloats(a, b); //retorna o resultado da função somaDeFloats

  cout << "Soma dos valores: " << soma << endl;
}

float somaDeFloats(float a, float b) { //função de soma de floats
  if (a == b) {
    return 2*(a + b);//caso 'a' e 'b' sejam iguais, a soma é multiplicada por 2
  } else {
    return (a + b);
  }
}
