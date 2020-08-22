//Programa que recebe várias notas e retorna a média e mediana
//Yasmin
//05.03.2020

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

float media ( vector <float> notas, int tamVetor); //funçãão que retorna a média
float mediana ( vector <float> ,int tamVetor); // funçãão que retorna a mediana

vector <float> notas;

int main () {

  int tamVetor;

  int QuantNotas = 0;
  float AdicionaNota, Soma = 0;

	cout << "Digite as notas: ";
	while ( cin >> AdicionaNota ) { //Pede as notas até não poder mais ler

    cout << "Digite as notas: ";
    notas.push_back (AdicionaNota);
		
	}
  tamVetor = notas.size();
  sort (notas.begin(), notas.end());//organiza as notas em ordem crescente

//chama as funções
  cout << "Média: " << media ( notas, tamVetor );
  cout << "\nMediana: " << mediana(notas, tamVetor);

return 0;
}

float media ( vector < float> notas, int tamVetor) { //função para calcular a média
  float TotalSoma = 0;

  for (int i = 0; i < tamVetor; i++) {
    TotalSoma += notas[i];
  }
  return (TotalSoma)/tamVetor;

}
float mediana ( vector <float> ,int tamVetor) { //função para obter a mediana

  if (tamVetor % 2 == 0) {
    float soma = notas[(tamVetor/2)] + notas[(tamVetor/2)+1];
    float mediadaMediana = soma/2;
    return mediadaMediana;

  } else {

    int resultado = (tamVetor/2);
    return notas[resultado];
  }
}
