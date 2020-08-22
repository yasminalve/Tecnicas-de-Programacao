//Programa para ler dados de 5 alunos e registrar seus nomes, matrícula e registrar duas notas, para calcular a media e verificar se foi aprovado;
//Yasmin Alves
//10.07.2020

#include <iostream>
#include <stdio.h> 
#include <string>

using namespace std;

struct Aluno { //armazenar os dados dos alunos

    string nome;
    long int matricula;
    float nota1;
    float nota2;

};

float retorno (float nota1, float nota2);//define a função que calcula as média

int main() {

    int x; 
    Aluno aluno[5];
    

    for (int i = 0; i < 5; i ++) { //recolher dados dos alunos

        cout << "Nome do " << i + 1 << "° Aluno: ";
        getline (cin, aluno[i].nome);
        cout << "Matrícula do " << i + 1 << "° Aluno: ";
        cin >> aluno[i].matricula;
        cout << "Nota 1 do " << i + 1 << "° Aluno: ";
        cin >> aluno[i].nota1;
        cout << "Nota 2 do " << i + 1 << "° Aluno: ";
        cin >> aluno[i].nota2;
        cout << endl;
        cin.ignore(); // tirar '/n' do getline que irá ler o nome do aluno
    }

    cout << endl << endl << endl;

    for (int i = 0; i < 5; i ++) { // exibir dados e aprovação

        float media = retorno(aluno[i].nota1, aluno[i].nota2);
        cout << "Matrícula: " << aluno[i].matricula << endl;
        cout << "Nome: " << aluno[i].nome << endl;
        printf( "Média: %.2f\n", media);

        if(media >= 70 ) {
        cout << "Aluno Aprovado!" << endl;
        } else {
        cout << "Aluno Reprovado!" << endl;
        }

    cout << endl << endl;
}
    
}

float retorno (float nota1, float nota2) { //função que calcula a média entre a nota1 e a nota2

  float media = (nota1 + nota2)/2;
  return media;

}
