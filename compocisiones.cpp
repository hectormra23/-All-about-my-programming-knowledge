//composicion
#include<iostream>
using namespcae std;
/*en el mundo real , los objetos complejos , son formados 
tipicmaente usnado objetos mas pequeños y simples .Por ejemplo,
un carro , consta de carroceria , motor y mas piezas  mas complejas y pequeñas.

En c++ , la compocision de objetos implica utilizar clases como
variables miembro en otras clases.

En c++ , la compocision de ejemplo demuestra la compocision en accion.
Contien una calse Person y Birthday , y cada Person tendra 
un objeto Birthday como uno de sus miembros*/

/*ejemplo*/

class Birthday {
	public:
	Birthday(int m , int d , int y)
	: month(m), day(d) , year(y)
	{
	}
	private:
	int month;
	int day;
	int year;
}:
	/*vamos a añadir una funcion printDate() a nuestra clase
	Birhtday*/
	
class Birthday{
public:	
	Birthday(int m , iny , d , int y)
	:month(m), day(d) , year(y)
	{
	}
	void printDate()
	{
		cout<<month<<"/"<<day
		<<"/"<<year<<endl;	
	}
	private:
	int month;
	int day;
	int year;	
};

/*a continuacion , podemos crear la calse PERSON , que incluye la clase
BIRTHDAY.*/

#include<iostream>
#include "Birthday.h"

class Person {
	public:
	Person(string n , Birthday b)
	:name(n) ,
	bd(b)
	{
	}
	private:
	string name;
	Birthday bd;
};