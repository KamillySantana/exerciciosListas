#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "Portuguese");
	
	string nome;
	int idade, cigarro, result;
	
	cout << "Informe a sua idade: ";
	cin >> idade;
	
	cout << "Quantos cigarros você fuma por dia: ";
	cin >> cigarro;
	
	result = (cigarro * 10);
	
	if (cigarro > 0){
		cout << "você perdeu " << result << " minutos de vida.";
	}
}
