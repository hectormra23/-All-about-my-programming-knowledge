//sobrecargo de funciones 2
#include<iostream>
using namespace std;
// NO PUEDES sobrecargar funciones declaradas que difieran solo por el tipo de retorno
//la siguiente declaracion devueleve un error:
int printNumber(int a) { }
int printNumber(int b){ }
double printNumber(int c) { } 
int main(){
	
	return 0;
}