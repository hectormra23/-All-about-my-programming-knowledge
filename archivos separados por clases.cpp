//archivos separados por clses
#include<iostream>
using namespace std:

/*creando una nueva clase:
genralemente , es una buena practica definir tus nuevas clases en archivoz separados . Esto hace mas facil mantener  leer el codigo.
Para hacer esto , sigue los siguientes pasos en codeblock:
haz click en file<<new<<class...
dale un nombre a la clase , descmarcando "has destructor" y maraca "hearder and implementation file be in same folser",
luego haz click sobre el boton "create"
se añadiran 2 nuevos archivos al proyecto
.h= header = encabezado
,cpp=source=  fuente.
*/

/*fuente y encabezado

el archivo de encabezado (h) , lamecena declaraciones  de funciones (prototipos) y declaraciones de variables.
actualemnte  incluye una plantilla para nueva clase , MyClass , con un constructor por defecto.

MycClass.h*/

#ifndef MyClass_H
#define MyClass_H

class MyClass
{
	public:
		MyClass();
		protected:
		private:
};

/*la implementacion de la clase y sus metodos van dentro del archivo 
fuente (.cpp)
en este momento , incluye solo un constructor vacio*/

//MyClass.cpp

#include "MyClass.h"

MyClass: :MyClass()
{
	//ctor
}
/*la declaracion #ifnder y #definer en el archivo de
encabezado , seran discutidas en las proximas sesiones*/

/*los encabezados , son usados para prototipos  de funciones y declaraciones de variables*/



