//Programa que recolhe os números apostados na mega-sena
//Yasmin
//10.07.2020

#include <iostream>
#include <set> 
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {

    int i, temp;
    set <int> apostas;

    auto verificar = apostas.find(temp); // Declara
    unsigned sorte = time(0);

    srand(sorte); //sorteia números novos

    for (i = 0; i < 6; i ++) {
        
        temp = 1 + rand() % 60;

        verificar = apostas.find(temp); // verifica se o número já foi sorteado

        if (verificar == apostas.end()) { //caso não, sorteia

            apostas.insert(1 + rand()%60 );

        } else { 
            i --;
        }
        
    }

    cout << "Apostas: ";

    for (int i: apostas) { // Exibir todas as apostas

        cout << i << " ";

    }
   
    return 0;
}
