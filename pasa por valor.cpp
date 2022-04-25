//pasa por valor
#include<iostream>
using namespace std;
//por defecto en c++ son pasados por valor.
//cuando se pasa por valor , una copia del arguemneto es pasado a la funcion
//ejemplo:

void myFunc(int x){
	x=100;
}
int main(){
	int var = 20;
	myFunc(var);	
    cout<< var;
}
