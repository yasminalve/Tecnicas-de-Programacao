//Programa que recolhe palavras e para quando alguma palavra for repetida
//Yasmin
//15.03.2020
#include <iostream>
#include <set> 

using namespace std;

string convert (string inicial);

int main () {

    set <string> palavras;
    string ptemp, pinicial;
    
    auto verificar = palavras.find(ptemp); // Declara 

    do {
        
        cout << "Digite uma palavra: ";
        cin >> pinicial;

        ptemp = convert(pinicial);

        verificar = palavras.find(ptemp);

        if (verificar == palavras.end()) { // Verifica se já foi adicionado

            palavras.insert(ptemp);
        }

    
    } while (verificar == palavras.end());

    cout << "Palavras: ";
        
    for (string temp: palavras) { //Exibir palavras

        cout << temp << ", ";

    }

    return 0;
}

string convert (string inicial) { // Função que transforma a string em minúscula

    for (int j = 0; j < inicial.size(); j++) {

        inicial[0] = toupper(inicial[0]);
        inicial[j] = tolower(inicial[j]);

    }

    return inicial;

}
