//Programa que recebe as coordenadas x e y de um ponto e verifica se ele está contido em um retângulo de vértices v1 e v2
//Yasmin Alves
//10.07.2020

#include <iostream>
using namespace std;

struct Ponto { //armazena as coordenadas do ponto e dos vértices

  int x;
  int y;

};

bool contido (Ponto p, Ponto v1, Ponto v2);//função que determina se o ponto está dentro do retângulo

int main() {

  Ponto p, v1, v2;

  //recolhe as coordenadas do ponto  e dos vértices
  cout << "Digite a coordenada X: ";
  cin >> p.x;
  cout << "Digite a coordenada Y: ";
  cin >> p.y;
  cout << "Digite as coordenadas do vértice inferior esquerdo (x y) : ";
  cin >> v1.x >> v1.y;
  cout << "Digite as coordenadas do vértice superior direito (x y) : ";
  cin >> v2.x >> v2.y;

  bool teste = contido(p, v1, v2); // chama a função com os parâmetros recolhidos

  if (teste == 1) { // verifica o que foi retornado
    cout  << "Ponto está contido no retângulo" << endl;
  } else {
    cout << "Ponto não está contido no retângulo" << endl;
  }

}
bool contido (Ponto p, Ponto v1, Ponto v2) {// função que determina se o ponto está contido no retângulo

  if ((p.x <= v2.x) && (p.x >= v1.x) && (p.y >= v1.y) && (p.y <= v2.y)) { //o ponto deve estar entre as coordenadas do vértice

    return 1;

  } else {

    return 0;

  }

}
