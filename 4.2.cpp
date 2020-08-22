// Programa para contar vogais, consoantes, digitos, caracteres especiais e espaços
// Yasmin
// 21.02.2020

#include <iostream>
#include <cctype>
#include <cstring> 

using namespace std;

//define as funções a serem utilizadas
int quantVogais (string frase);
int quantConsoante (string frase);
int quantDigito (string frase);
int quantCaractere (string frase);
int quantEspaco (string frase);

int main() {
  string frase;

  cout << "Digite uma frase: "; // recolhe a frase do usuário
  getline (cin, frase);

  //Chama as funções utilizando como parâmetro a string frase
  cout << "Quantidade de Vogais: " << quantVogais (frase);
  cout << "\nQuantidade de Consoantes: " << quantConsoante (frase);
  cout << "\nQuantidade de Dígitos: " << quantDigito (frase);
  cout << "\nQuantidade de Espaços: " << quantEspaco (frase);
  cout << "\nQuantidade de Caracteres Especiais: "<< quantCaractere(frase);

} 

int quantVogais (string frase) { // função que vai contar as vogais
  int contadorVogais = 0;
  for (char letra : frase) { // Passa por toda a string e verifica se atende as condições para ser vogal
    if ( isalpha (letra) && (letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u') ) {
      contadorVogais ++;
   }
 }
 return contadorVogais;
}

int quantConsoante (string frase) { // Função que conta as consoantes
  int contadorConsoante = 0;
  for (char letra : frase) { // Passa por toda a string e verifica quantos caracteres satisfazem a condição de Consoante
    if (isalpha (letra) && !(letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u')) {
      contadorConsoante ++;
    }
  }
  return contadorConsoante;
}
int quantDigito (string frase) { // Função que verifica se é um dígito

  int contadorDigitos = 0;

  for ( char digito : frase ) { // Passa por toda a string e verifica se é um dígito
    if ( isdigit (digito))  {
        contadorDigitos ++;
    }
  }
  
 return contadorDigitos;
}


int quantEspaco ( string frase) { // Função que conta os espaços em branco

    int contadorEspaco = 0;

  for ( char espaco : frase ) { // Passa por toda a string contando os espaços em branco

    if ( isspace (espaco))  { //Verifica se cada caractere é ou não um espaço
        contadorEspaco ++;
    }

  }
  return contadorEspaco;
} 


int quantCaractere (string frase) { // Função que conta quantos caracteres especiais tem na frase e retorna a quantidade 

  int contadorCaractere = 0;

  for ( char caractere : frase ) { // Passa por cada caractere da função e verifica se é um caractere especial

    if ( ispunct (caractere))  { // Verifica se cada caractere é um caractere especial 

        contadorCaractere ++;

    }
  }
  return contadorCaractere;
}
