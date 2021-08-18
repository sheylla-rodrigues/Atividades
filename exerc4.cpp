
#include<iostream>

using namespace std;

int main(){
	
	int num = 0;
	
	cout << "Digite um número: \n";
	cin >> num;
	
	if(num > 0){
		cout << "Esse número é positivo!" << "\n";
	}else if (num< 0) {
		cout << "Esse número é negativo!" << "\n";
	}else {
		cout << "Esse número é nulo!" << "\n";
	}
	
	return 0;
	
}