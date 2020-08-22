//Programa para cadastrar alunos
//Yasmin Alves da Silva
//05.03.2020
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

struct Aluno { //Armazena os dados do aluno

   string nome;
   float media;
   long matricula;

};

bool ordemMedia(Aluno a, Aluno b);// função para ordenar em ordem de média
int encerrado ( string nome); //Detectar quando o usuário digita um dígito e encerra o programa

int main (){

   vector <Aluno> turma;
   Aluno atual;
   int condicao = 1;

   do {

       cout << "Informe o nome do aluno(digite um numero para sair): ";
       cin >> atual.nome;

      int situacao = encerrado (atual.nome);
      if ( situacao == 1) { //Quando detectar número, encerra
         break;
      }

       cout << "Informe a matrícula do aluno: ";
       cin >> atual.matricula;
       cout << "Informe a media do aluno: ";
       cin >> atual.media;
       turma.push_back(atual);

   } while (condicao != 0);

   sort(turma.begin(),turma.end(),ordemMedia);

   for(Aluno a : turma) { //Exibir os alunos
       cout << a.nome << " : "<< a.matricula << " : " << a.media<<endl;
   }


   return 0;
}

bool ordemMedia(Aluno a, Aluno b){ //Funçãão para exibir de acordo com a média
   return a.media < b.media;
}
int encerrado (string nome) { // Função para verificar dígito
  for (char letra: nome) {
    if (isdigit(letra)) {
      return true;
    }
  }
  return false;
}
