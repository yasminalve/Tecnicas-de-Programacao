// Programa que recebe o nome do usuário e retorna "Olá, nome";
// Yasmin
// 21.02.2020

#include <iostream>

using namespace std;

string helloNome (string nome); // Define função 

int main() {
  
  string nome;

// Recolhe informações do usuário
  cout << "Qual é o seu nome? ";
  getline (cin, nome); // Recebe o nome e armazena na string nome

  cout << helloNome (nome); // Chama a função com o parâmetro nome e exibe o resultado

}

string helloNome (string nome) { // Função para retornar Olá, Nome!

  string resultado = "Olá, " + nome + "!";
  return resultado;

}
