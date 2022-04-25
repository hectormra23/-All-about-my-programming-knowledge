//inicializadores de miembro
#include<iostream>
using namespace std;
/*recuerda que CONSTANTES  , son variables que no pueden ser
modificadas , y que todas las variables CONST deben ser inicializadas
al momento de la creacion.

C++ provee una sintaxis util para inicializar miembors de clase
llamado la LISTA DE INICIALIZCION de miembros(tambien llamada un
inicializador de constructor)*/
/*considera la siguiente clase*/
class Myclass{
	Myclass(int a, int b){
	regVar = a:
	contVar = b:
	}
	private:
	int regVar;
	const int consrVat;	
}
/*esta clase rine 2 variables miembro regVar y consVar. Tambien
tiene un constructor que toma dos parametros , que son usados para
inicializar las variables miembro.
Al ejecutar este codigo obtenemos un ERROR , porque una de sus
variables miembro es una constante a la cual no se le puede asignar
un valor despues de la declaracion.

En casos como este , una lista de inicializacion de miembros puede
ser usasda para asignar  valores a las variables miembro.*/

class Myclass{
	public:
	Myclass(int a , int b)
	: regVar(a), constVar(b)
	{
	}
	private:
	int regVar;
	const int constVar;
	};
	/*Vamos a escribir el ejemplo anterior utilizando archivos de 
	encabezado y fuente por separado*/
	
	//Myclass.h
	class Myclass{
		public:
		Myclass(int a , int b);
		private:
		int regVar;
		cons int constVar;
	} ;
	
	//Myclass.cpp
	Myclass: :Myclass(int a , int b)
	: regVar(a), constVar(b)
	{
		cout<<regVar<<endl;
		cout<<constVar<<endl;
	
	}
	/*hemos añadido declaraciones cput en el constructor para imprimir
	los valores de las variables miembro.
	Nuestro siguiente paso es crear un pbjeto de nuestra clase en main,
	y utilizar el constructor para asignar valores*/
	#include"Nyclass"
	
	int main(){
		Myclass obj(42 , 21):
	}
	/*la lista de inicializacion de miembros puede ser usada para 
	variables normales , y debe ser usada para variables constantes*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
	