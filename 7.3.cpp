//Programa que adiciona nome, sobrenome, idade e cpf
//Yasmin
//16.03.2020

#include <iostream>
#include <string>
#include <set> 

using namespace std;

struct Pessoa {
    string nome;
    string sobrenome;
    int idade;
    long long int cpf;
};

bool operator < (Pessoa a, Pessoa b) { //Ordenar por sobrenome
    return a.sobrenome < b.sobrenome;
}

string convert (string inicial);

int main () {

    set <Pessoa> lista;
    Pessoa temp;
    string sobrenome, nome;

    char condicao;
    do { //Adicionar dados ao switch Pessoa e depois mandar pro set lista

        cout << "\nDeseja adicionar alguém? (S/N) ";
        cin >> condicao;

        if (condicao == 'S' || condicao == 's') {

            cout << "Nome: ";
            cin >> nome;
            cout << "Sobrenome: ";
            cin >> sobrenome;

            temp.nome = convert(nome); 
            temp.sobrenome = convert(sobrenome); //converte as letras do sobrenome para evitar adicionar o mesmo sobrenome

            auto verificar = lista.find(temp); // Verifica se já existe o sobrenome para poder continuar

            if (verificar != lista.end()) { // Caso já exista, não pode adicionar essa pessoa

                cout << "\nJá existe um usuário com este sobrenome.\n";

            } else { // Caso não exista, adiciona o resto dos dados

                cout << "Idade: ";
                cin >> temp.idade;
                cout << "CPF: ";
                cin >> temp.cpf;

                lista.insert(temp);

            }

            
        } else {

            break;

        }

    } while (condicao == 'S' || condicao == 's');

    
    do {

        cout << "\nDeseja procurar alguém? ";
        cin >> condicao;

        if (condicao == 'S' || condicao == 's') {
            cout << "\nSobrenome: ";
            cin >> sobrenome;

            temp.sobrenome = convert (sobrenome);
            lista.insert(temp);

            auto verificar = lista.find(temp);

            if (verificar != lista.end()) { //Caso encontrado

                cout << "\nNome: "<< verificar -> nome << endl;
                cout << "Sobrenome: "<< verificar -> sobrenome << endl;
                cout << "Idade: "<< verificar -> idade << endl;
                cout << "CPF: "<< verificar -> cpf << endl;       

            } else {

                cout << "Nome não encontrado.";

            }
        }
    } while (condicao == 'S' || condicao == 's');

    for (Pessoa temp1 : lista){ //Exibir todos os dados

        cout << temp1.nome << " : " << temp1.sobrenome << " : " << temp1.idade << " : " << temp1.cpf <<endl;

    }


return 0;
}

string convert (string inicial) { // Função que transforma a string em minúscula com inicial maiúscula

    for (int j = 0; j < inicial.size(); j++) {

        inicial[0] = toupper(inicial[0]);
        inicial[j] = tolower(inicial[j]);

    }

    return inicial;

}
