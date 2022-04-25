//el operador de resolucion de ambito.

/* los 2 puntos dobles en le archivo fuente (cpp) son llamados el OPERADOR DE RESOLUION DE AMBITO,
y es utilizado para la definicion del constructor.

ejemplo: */

#include "MyClass.h"

MyClass: :MyClass()
{
	//ctor
}

/*el operador de resolucion de ambito , es usado para definir funciones
miembros de una caracteristica de una clase particular , que ya ha sido declarada.
Recuerda que definimos el prototipo del constructor en el archivo de encabezado. */


//crear una funcion llamada "test" que pertenezca a una clase llamda "demo"

demo::test
{
}

/*fuente y encabezdo

para utilizar nuestras clases en nuestro main , necesitamos incluir 
nuestro archivo de ENCABEZADO.

Por ejemplo . para utilizar nuestra recientemente creada MyClass en main.: */

#include<iostream>
#include "MyClass.h"
using namespace std:
	
	int main(){
		MyClass obj:
	}
	
	/*el encabezado declara "que cosa" una clase (o lo que sea que este implementando)
	hara , mientras que el archivo fuente cpp define "como" realizara esas caracteristicas.