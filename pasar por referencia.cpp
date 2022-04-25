//pasar por referencia
#include<iostream>
using namespace std;
//pasa pasar el valor por referencia , punteros a los arguemtos son pasados a la funcion tal y como cualquier otro valor.
void myFunc(int *x){
	*x = 100;
}

int main(){
   int var = 20;
   myFunc(&var);
   cout << var;
   }