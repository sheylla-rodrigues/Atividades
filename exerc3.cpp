#include<iostream>

using namespace std;

int main(){
	
	int num = 0;
	
	cout << "Digite um número: \n";
	cin >> num;
	
	if(num % 2 == 0){
		cout << "Esse número é par!" << "\n";
	}else {
		cout << "Esse número é impar!" << "\n";
	}
	
	return 0;
	
}