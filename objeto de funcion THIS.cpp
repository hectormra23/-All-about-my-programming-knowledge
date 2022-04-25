//
#include<iostream>
using namespace std;
class Myclass{
	public:
	Myclass(int a ) : var9a
    { }		
	void printInfo(){
	cout<<var<<endl;
	cout<< this -> var<<endl;
	cout<< (*this).var<,endl;
	}
	private:
		int var;
};

int main(){
	Myclass obj(42)
	obj.printInfo();	
}
