//arreglos y funciones 2
#include<iostream>
using namespace std;
//podemos usar funciones en main() y llamarlas con nuestro arreglo , por ejemplo:
void printArray(int arr[], int size){
	for(int x = 0; x<size; x++){
	cout <<arr[x]<<endl;
	}
}

int main(){
	int myarr[3]={42 , 33 , 88};
	printArray(myarr , 3);
}