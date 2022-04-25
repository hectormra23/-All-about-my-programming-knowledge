//THIS
/*cada objeto en c++ tiene acceso a si propia direccion a traves de 
un puntero importante llamda el puntero THIS.
Dentro de una funcion miembro THIS , puede ser usado para referirse
al objeto que invoco la funcion.
Vamos a crear una clase de ejemplo:*/

class Myclass{
	public:
		Myclass(int a ): var(a)
		{ }
		private:
			int var;
};
/*el metodo printinfo() ofrece tres alternativas para imprimir la 
variable miembro de la clase*/

class Myclass{
public:
Myclass(int an) : var(a)
{ }
void printInfo(){
	cout<<var<<endl;
	cout<< this<<endl;
	cout<< (*this).var<<endl;
}
private:
int var;
};
/*puedes preguntare porque es necesario utilizar la palabra 
clave this, cuando la opcion de especificar la variable
directamente.

la palabra claveTHIS , tiene un rol importante al sobrecargar
operadores , que sera cubierto en la siguiente secion*/
