#include<iostream>

using namespace std;

int main(){

	float temperatura;
	float f;

	cout << "Qual a temperatura em graus Celsius? \n";
	cin >> temperatura;

	f = ( 9 * temperatura + 160 ) / 5;

	cout << "A temperatura em Fahrenheit é: \n" << f;

	return 0;
} 