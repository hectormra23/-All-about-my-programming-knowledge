//sobrecarga de datos

#include<iostream>
using namespace std;
	//cuando sobrecargamos una funcion , la definicion de la funcion , debe diferir a las demas por los tipos y/o el numero de argumentos en la lista de argumentos.
	//ejemplpo:
	
	void printNumber(int a) {
		cout << "prints an integer:" << x << endl;
	}
	void printNumber(float x) {
		cout <<"prints an integer" << x << endl;
	}
	
	int main(){
		int a = 16;
		int x = 54.541;
		printNumber(a);
		printNumber(x);
	}
	
	
	
	
