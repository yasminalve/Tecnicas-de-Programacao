//Programa que retorna o quadrado de um número
//Yasmin Alves
//10.07.2020

#include <iostream>

using namespace std;
int resultado, *presultado;

void quadrado(int *valor);//declara a função quadrado

int main() {
  int x, *pvalor;//x é o valor digitado pelo usuário

  cout << "digite o valor: ";
  cin >> x;

  pvalor = &x;
  quadrado (pvalor) ;//valor da função quadrado tem como parâmetro x

  cout << *presultado << endl; //demonstração

}
void quadrado(int *valor) {
  
  resultado = (*valor)*(*valor); // x^2
  presultado = &resultado; // ponteiro recebe o endereço do resultado

  return;

}
