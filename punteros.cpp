//punteros
/*podemos usar tambien un puntero para acceder los miembros del
objeto. El siguiente puntero apunta al objeto OBJ:*/
/*
Myclass obj;
Myclass *ptr = &obj;
*/
/*el operador de seleccion:



El operador flecha de seleccion de miembros (->) es usado para
acceder los miembros de un objeto con un puntero*/

#include<iostream>
using namespace std;

class Myclass
{
	public:
		Myclass();
	void myPrint();
 };
 
 Myclass: :Myclass(){
 }
 void Myclass: :myPrint(){
 	cout<<"hello"<<endl;
 }
 
 int main(){
 	Myclass obj;
 	Myclass *ptr = &obj;
 	ptr->myPrint();
 }