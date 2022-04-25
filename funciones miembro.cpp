//Funciones miembro
#include<iostream>
/*Vamos a crear una funcion de ejemplo llamada myPrint() en nuestra clase*/

//Myclass.h

class Myclass
{
	public:
	Myclass():
	void myPrint();
};

//Myclass.cpp

#include "Myclass.h"
#include<iostream>
using namespace std;

MyClass: :Myclass(){
}

void Myclass: :myPrint(){
	cout<<"hello"<<endl;
}