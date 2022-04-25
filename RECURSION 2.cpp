//recursion 2
#include<iostream>
using namespace std;
//funcion factorial:
int factorial(int n) {
	if (n==1){
		return 1;
	}
    else{
	return n * factorial(n - 1);
	}
}

  int main(){
 cout << factorial(5);	
  }