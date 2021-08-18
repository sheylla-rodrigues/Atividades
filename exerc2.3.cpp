  
#include<iostream>

using namespace std;

int main(){
	
	float temperatura;
	float c;
	
	cout << "Qual a temperatura em graus Fahrenheit?\n";
	cin >> temperatura;
	
	c = ((temperatura - 32) * 5) / 9;
	
	cout << "A temperatura em Celsius é: \n" << c;
	
	return 0;
}