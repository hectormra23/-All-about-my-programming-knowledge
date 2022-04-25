//RECURSION
#include<iostream>
using namespace std;

//progrma que saque el factorila de un  numero:
//el factorial de n , es escrito como n!
//ejemplo:

// 4! = 4 * 3 * 2 * 1 = 24

//vamos a definir una funcion:

int factorial(int a){
	if (n==1) {
	return 1;	
	}
	else {
	return n * factorial(n - 1);	
}
}
