/Programa que armazena valores e retorna o menor deles
//Yasmin Alves da Silva
//05.03.2020

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector < double > numeros; //Vetor que armazena os números

double numero;

int main() {

  cout << "Digite um numero: " << endl;

  while (cin >> numero) { //Executa até o número não puder ser lido

	  cout << "Digite um numero: " << endl;
    numeros.push_back (numero);

}
  sort (numeros.begin(), numeros.end()); //Organiza do menor para o maior
  cout << "Menor numero: " << numeros [0]; //Chama o primeiro número, o menor

  return 0;

}
