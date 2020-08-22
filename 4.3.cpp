// Jogo da forca
// Yasmin 
// 26.02.2020

#include <iostream>
#include <stdlib.h>
#include <string> 
#include <cctype> 

using namespace std;

void forca ( int sorteio, int letras, int categoria);

// Matriz com as palavras a serem sorteadas
char palavras [45][20] = { "Alho", "Bolo", "Bife", "Pera", "Sopa", "Amora", "Arroz", "Leite", "Manga", "Pizza", "Cereja", "Banana", "Ameixa", "Pipoca", "Mousse", "Bode", "Anta", "Lobo", "Gato", "Rato", "Arara", "Grilo", "Corvo", "Cobra", "Porco", "Girafa", "Gorila", "Aranha", "Ovelha", "Cavalo", "Cama", "Faca", "Mesa", "Bola", "Pneu", "Apito", "Blusa", "Garfo", "Caixa", "Corda", "Bicama", "Broche", "Gaiola", "Gaveta", "Quadro"};

int main() {

  int letras, sorteio, categoria; 


  // Pedir para o usuário personalizar a forca, escolhendo a categoria, a quantidade de letras e digitando um número aleatório
  cout << "Selecione a categoria: \n1 - Comida\n2 - Animais\n3 - Objeto \n";
  cin >> categoria;

  switch (categoria) {
   case 1: categoria = 0; break;
   case 2: categoria = 15; break;
   case 3: categoria = 30; break;
   default: system ("clear"); cout << "Categoria não existe!\n"; break;

 }

  cout << "Digite um número de 1 à 5: ";
  cin >> sorteio;
  cout << "Quantidade de letras (4, 5 ou 6): ";
  cin >> letras;

  forca (sorteio, letras, categoria); // Chama a função forca

}

void forca (int sorteio, int letras, int categoria) { //função forca

  string palavra; string resultado; string Totaltentativas = "";

  char tentativa;

  switch (letras) { // Conforme a quantidade de letras, coloca-se "_" onde vai ficar cada letra da palavra e seleciona a posição da palavra

    case 4: palavra = palavras [ categoria + 0 + (sorteio - 1)], resultado = "_ _ _ _"; break;
    case 5: palavra = palavras [ categoria + 5 + (sorteio - 1)],resultado = "_ _ _ _ _"; break;
    case 6: palavra = palavras[ categoria + 10 + (sorteio - 1)], resultado = "_ _ _ _ _ _"; break;
    default: cout <<"Erro"; break;

  }

  cout << " _ \n| |\n|\n|\n|  ";
  cout << resultado;

  int chances = 10; // Vidas na forca
  int termino = 0; // Variável que detecta o fim do programa
  
  while ( chances > 0 ) {

    cout << "\t\t Digite uma letra: ";
    cin >> tentativa;
    system ("clear"); // Limpa o sistema sempre que 

    int mudanca = 0; // Variável que indica se alguma letra foi acertada

    Totaltentativas = Totaltentativas + tentativa + " "; 

    int posicao = 0; 

    for ( char letra : palavra) { // Verificar de letra por letra se houve acerto

      if ( letra == toupper (tentativa) || letra == tolower (tentativa)) {

        resultado [ posicao ] = letra;
        chances = chances;
        mudanca ++;
        termino ++;

      } 

      posicao += 2;

    }

    if (mudanca == 0) {

      chances --;
    
    }

    cout << "\n _ \n| |"<< " Chances: "<< chances << "\n|  "<< " Tentativas: " << Totaltentativas << "\n|\n|  ";
    cout << resultado;

    // Quando completar a palavra
    if ( termino == letras) {

      cout << "\n\nParabéns!";
      break;

    }
    
    
  }

  if (chances == 0) {

    cout << "\n\nPerdeu!\nTente novamente!";

  }
  
}
