#include<iostream>

using namespace std;

int main(){
	
	float tempo;
	float velocidade;
	float distancia;
	float litrosUsados;
	
	cout << "Quanto o tempo durou a viagem?\n";
	cin >> tempo;
	cout << "Qual foi velocidade média da viagem?\n";
	cin >> velocidade;	
	
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	
	cout << "A quantidade de litros de combustivel usado na viagem foi de: " << litrosUsados;
	
	return 0;
}