compocion parte 2

/*ahora nuestra clase Person , tiene un miembro del tipo Birthday*/

class person{
	public:
	person(string n , Birthday b)
	: name(n),
	bd(b)
	{
	}
	private:
	string name;
	Birthday bd;	
};

/*compocision*/
/*vamos a agregar una funcion printinfo() a nuestra clase person , que
imprima la data del objeto:*/


class person{
	public:
	person(string n , Birthday b)
	: name(n),
	bd(b)
	{
	}
	private:
	string name;
	Birthday bd;	
};
/*composicion*/
/*ahora que tenemos definido nuestras clases birthday y person,podemos ir a nuestro main
crear un objeto Birthday , y pasarselo al
objeto person*/
#include<iostream>
using namespace std;
class person{
	public:
	person(string n , Birthday b)
	: name(n),
	bd(b)
	{
	}
	private:
	string name;
	Birthday bd;
	
class person{
	public:
	person(string n , Birthday b)
	: name(n),
	bd(b)
	{
	}
	private:
	string name;
	Birthday bd;	
};	
};
int main(){
	Birthday db(2 , 21 , 1985);
	Person p("davis", bd):
	p.printinfo();
}


