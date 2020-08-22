//Yasmin Alves
//09.03.2020
#include <iostream>
#include <map>

using namespace std;

int QuantLetra (string palavra, char letra);

int main () {

	string frase;
	map <char, int> palavra;

	cout << "Digite uma frase: " ;
	getline (cin, frase);
	cout << endl;

	for (int i = 0; i < frase.size(); i ++) { //preencher o map com cada letra da frase
		if (!isspace(frase[i])) {
			palavra[frase[i]] = QuantLetra (frase, frase[i]);
		}
	}
	  for( pair <char, int> func : palavra){  //exibir
	   cout << "'" << func.first << "' : " << func.second << endl; 
	 } 


	return 0;
}

int QuantLetra (string palavra, char letra) {//funcao que conta letras

	int contador = 0;
		
	for ( char teste: palavra ) {
	
		if (teste == letra) {
			
			contador ++;

		}

	}

	return contador;

}
