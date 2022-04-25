//sobrecarga de funciones

#include<iostream>
using namespace std;

int main(){
	//ejmeplo de4 funcion void que puyede impirmir el valor de su parametro
	voit printNumber(int a) {
	cout<< a;	
	}
	//esto funciona solamente usando enteros como argumentos.
	//sobrecargar lo hara disponible para otros tipos , como flotantes.
	//ejemplo:
	void printNumber(float a) {
		cout << a;
	}
	
	return 0;
}


