//Programa que recebe duas datas e calcula a diferença de dias entre elas.
//Yasmin Alves
//10.07.2020

#include <iostream>

using namespace std;


struct Data { //armazena os valores dia, mês e ano digitados pelo usuário
  int dia;
  int mes;
  int ano;
};
int diaspassados (Data Inicial, Data final); //define função para calcular os dias
bool bissexto (int x);

int main() {
  Data dataInicial, dataFinal;

//recolher informações da primeira data
  cout << "Dia Inicial: ";
  cin >> dataInicial.dia;
  cout << "Mês Inicial: ";
  cin >> dataInicial.mes;
  cout << "Ano Inicial: ";
  cin >> dataInicial.ano;

//recolher informações da segunda data
  cout << "Dia Final: ";
  cin >> dataFinal.dia;
  cout << "Mês Final: ";
  cin >> dataFinal.mes;
  cout << "Ano Final: ";
  cin >> dataFinal.ano;

  int m = diaspassados (dataInicial, dataFinal); //chama a função usando os valores recolhidos como parâmetro dentro dela
 
  if (m == -1) { // caso retorne diferença de dias negativos apresenta mensagem de erro 

    cout << endl << "ERRO! Data final antecede a inicial." << endl;

  } else if (m == 0) {

      cout << "ERRO! Datas Iguais." << endl;

  } else {

    cout << "Dias contados: " << m << " dias"; //Mostra o valor em dias através do retorno da função

  }
  

}

int diaspassados (Data Inicial, Data Final) { //função para calcular os dias

  int diferencaTotal=0, diasMesBissexto[12]= {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, 
  diasMesNaoBissexto[12]= {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int mesVariavel = Inicial.mes; // variável mês que oscila de janeiro até dezembro, ou entre os meses fornecidos, facilitando os cálculos
  
    for ( int x = Inicial.ano; x <= Final.ano; x += 1 ) {

      if (Final.ano != x) { //quando houver diferença entre os anos ele irá executar: 

        
          for ( int y = mesVariavel ; y <= 12 ; y += 1, mesVariavel++) { 

            // o valor em dias contados anteriormente mais o dia contido no mês correspondente
            if (bissexto(x) == 1) { 
                diferencaTotal += diasMesBissexto[y-1];
            } else { 
                diferencaTotal += diasMesNaoBissexto[y-1]; 
            }

            if (mesVariavel == 12) {  // O mês volta a ser janeiro para a próxima execução

              mesVariavel = 1;
              break; 

            }

          }


      } else { // se não houver diferença entre anos
    
        
        for ( int y = mesVariavel ; y < Final.mes ; y += 1, mesVariavel++) { // vai até o mês final fornecido

            if (bissexto(x) == 1) { 
                diferencaTotal += diasMesBissexto[y-1];
            } else { 
                diferencaTotal += diasMesNaoBissexto[y-1]; 
            }
        
        } 
      } 
    }

  diferencaTotal = diferencaTotal - Inicial.dia + Final.dia; // adiciona os dias que não formam meses completos

  if (((diferencaTotal == 0) && (Final.mes < Inicial.mes)) || ((diferencaTotal == 0) && (Final.ano < Inicial.ano))) { //caso a diferença de datas seja nula ou positiva

    return (-1);

  } else {
    return diferencaTotal; //retorna os dias totais calculados
  }
  

}
bool bissexto(int x) {
    if ((( x%4 == 0) && ( x%100 != 0)) || ( x%400 == 0) ) return 1;
    else return 0;
}
