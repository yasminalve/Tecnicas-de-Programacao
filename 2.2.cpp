//Programa que retorna true se Maria e João estiverem sorrindo
//Yasmin Alves
//10.07.2020

#include <iostream>

using namespace std;

bool criancasSorrindo( bool maria, bool joao ); //declara a função criancasSorrindo

int main() {
  char mariaSorrindo, joaoSorrindo;
  bool maria, joao;

  cout << "Maria está sorrindo? (S/N): ";
  cin >> mariaSorrindo;
  cout << "João está sorrindo? (S/N): ";
  cin >> joaoSorrindo;

//Associa o S afirmativo ou N negativo em que maria ou joão estão ou não sorrindo em char para true ou false em booleano
  if (mariaSorrindo == 'S'|| mariaSorrindo == 's') { 
    maria = true;
  } else if (mariaSorrindo == 'N'|| mariaSorrindo == 'n') {
    maria = false;
    } 
  if (joaoSorrindo == 'S'|| joaoSorrindo == 's') { 
    joao = true;
  } else if (joaoSorrindo == 'N'|| joaoSorrindo == 'n') {
    joao = false;
    } 
  bool situacao = criancasSorrindo(maria, joao); //retorna o valor da função em bool

  if (situacao == true) {//Caso haja problemas, retorna true, caso não haja, retorna false
    cout << "true" << endl;
  } else if (situacao == false) {
    cout << "false" << endl;
  }
  cout << situacao;//retorna o valor da função
}
bool criancasSorrindo(bool maria, bool joao) { //função booleana com parâmetros maria e joão
  char mariaSorrindo, joaoSorrindo;
  
  if ((maria == true && joao == false)||(maria == false && joao == true)) { //caso apenas um esteja sorrindo retorna false
    return false;
    cout << "false";
  } else { //caso os dois estejam sorrindo retorna true
    return true;
    cout << "true";
  }
}
