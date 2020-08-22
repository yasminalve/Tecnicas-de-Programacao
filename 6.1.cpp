//Yasmin Alves
//09.03.2020

#include <iostream>
#include <map>

using namespace std;

int main () {

	map <int, int> multiplo;
	int n;

	cout << "Digite o valor de n: ";
	cin >> n;

	
	for (int i = 1; i <= n; i ++) { //Adicionar valores ao map

		multiplo.insert (pair <int, int> (i, i*i));
		
	}
	for (pair <int, int> num : multiplo) { //Exibir o que está contido no map

		cout << num.first << " : " << num.second << endl;

	}



return 0;



}
