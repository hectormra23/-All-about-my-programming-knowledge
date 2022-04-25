//arreglos y funciones
#include<iostream>
using namespace std;
//tambien podemos usar arrlegos para declarar funciones como argumentos
//al declarar la funcion , el parametro , debe definirse como un arrglo usando conchetes[]
//rjrmplo:

void printArray(int arr[] , int size){
	for(int x = 0; x < size; x++ ){
	cout << arr[x];
	}
}

int main(){
	int arr[] = {1 , 2 , 3 , 4 , 5};
	printArray(arr , 5);
}
