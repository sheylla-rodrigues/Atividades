#include <iostream>

using namespace std;

int main()
{
	float temp;
	float tempK;
	float tempC;
	
	cout << "Digite a temperatura em Fahrenheit: ";
	cin >> temp;
	
	tempC =  (( temp - 32 ) * 5) / 9;
	tempK =  tempC + 273.15;
	cout << "A temperatura convertida em Kelvin é " << tempK;
}