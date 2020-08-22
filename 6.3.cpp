#include <iostream>
#include <map>

using namespace std;

int main () {

map <string, string> telefones;

    string nome;
    string telefone;

    do {

        cout << "\nDigite um nome (ou ""sair"" para imprimir uma lista e sair): ";
        getline (cin, nome);

        if (nome == "sair") { break; };

        auto verificar = telefones.find (nome);

        if (verificar == telefones.end()) { //verificar se já existe um nome

            cout << "Digite o telefone de " << nome << ": ";
            getline (cin, telefone);
            telefones.insert (pair <string, string> (nome, telefone));

        } else {

            cout << "Telefone de " << verificar -> first << ": " << verificar -> second << endl;
        }
        

    } while (nome != "sair");

    return 0;
}
