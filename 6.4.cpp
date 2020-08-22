//12.03.2020
//Yasmin
// Programa com lista de compras
#include <iostream>
#include <map>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

float total(map<string, map <int, float>> lista);
float media(map<string, map <int, float>> lista);
void exibicao (map<string, map <int, float>> lista);
float totalproduto (map<string, map <int, float>> lista);

int main() {
    
    map <string, map <int, float>> lista;

    int quantidade;
    string nomeproduto;
    float preco; char resposta;

    while (nomeproduto != "sair") { // condição para executar o programa

        cout << "Produto: ";
        cin >> nomeproduto;

        if (nomeproduto == "sair") {break;}

        auto verificar = lista.find (nomeproduto);
        if (verificar != lista.end()) { //verifica se o produto já existe

            lista.erase (nomeproduto); //apaga a quantidade anterior para receber a outra
            cout << "Produto existe! Mudar a quantidade (S/N)? ";
            cin >> resposta;

            if (tolower(resposta) == 's') { //mudar a quantidade do produto
                
                cout << "Quantidade de " << nomeproduto << ": ";
                cin >> quantidade;
                lista[nomeproduto][quantidade] = preco;

            } else {
                
            }

        } else {
            cout << "Quantidade: ";
            cin >> quantidade;
            cout << "Preço: ";
            cin >> preco;

        }

    lista[nomeproduto][quantidade] = preco;

    }

    exibicao(lista);

    cout << "\nTotal das compras: " << total(lista) << endl;
    cout << "Média de preços: " << media(lista);

    return 0;
}

float total(map<string, map <int, float>> lista) {// funcao que calcula o total de compras

    float resultado = 0;

    for (auto item : lista) { //"segmenta" o map de fora

        for (auto atributo: item.second) {// "segmenta o map dentro do outro map"

            resultado += atributo.first*atributo.second;

        }
        
    }
    return resultado;
}
float media(map<string, map <int, float>> lista) { //media do preço dos produtos

    int itens = 0; float soma = 0;

    for (auto item : lista) {
        for (auto atributo: item.second) {
            soma += atributo.first;
            itens ++;
        }
        
    }
    return (soma/itens);
}

void exibicao (map<string, map <int, float>> lista) { //exibir os dados
    float totalproduto = 0;
    vector <float> menormaior;
    cout << "Nome : Quantidade : Preco unitario : Soma total" << endl;

    for (auto item : lista) { 
        totalproduto = 0;

        for (auto atributo: item.second) {

            totalproduto += atributo.second*atributo.first;
            menormaior.push_back(totalproduto);

            cout << item.first << " : " << atributo.first << " : " << atributo.second << " : " << totalproduto << endl;

        } 
    }
    sort (menormaior.begin(), menormaior.end()); //ordenar o valor total de cada produto

    cout << "Menor preço total: " << menormaior[0] << "\nMaior preço total: " << menormaior[menormaior.size()-1];




}
