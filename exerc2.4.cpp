#include<iostream>

using namespace std;

int main(){

	float temp;
	float k;

	cout << "Qual a temperatura em graus Celsius?\n";
	cin >> temp;

	k = temp + 273.15;
	cout << "A temperatura em kelvin é: \n" << k;

	return 0;
} 