//la palabra clase FRIEND.
/*funciones amigas*/

/*Normalmente, no se puede acceder a los miembros privados de una clase desde fuera de esa clase.
Sin embargo, declarar una función no miembro como amiga de una clase le permite acceder a los miembros privados de la clase. Esto se logra incluyendo una declaración de esta función externa dentro de la clase y precediéndola con la palabra clave amigo .
En el siguiente ejemplo, someFunc () , que no es una función miembro de la clase, es amigo de MyClass y puede acceder a sus miembros privados.*/
class Myclass{
public:	
	Myclass(){
		regVar = 0;
	};
	private:
	int regVar:
	
	friend void somefunc(Myclass &obj);	
};

/*la funcion someFunc() esta definida como una funcion regulada fuera
de la clase . Toma un objeto del tipo Myclass como su parametro , y 
tiene la capacidad de acceder a los miembros de datos privados de ese objeto*/

class Myclass{
	public:
	Myclass(){
		regVar =0;
	};
	
	private:
		int regVar;
		friend void somefunc(Myclass &obj);
};

void someFunc(Myclass &obj){
	obj . regVar = 42;
	cout<<obj.regVar;
}

/*la funcion someFunc() modifica el miembro privado del objeto e
imprime su valor.*/
/*ahora podemos crear un objeto en main y llama a la funcion:
someFunc()*/

int main(){
	Myclass obj;
	someFunc(obj);
}

