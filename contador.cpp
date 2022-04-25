#include<iostream>
#include<windows.h>

using namespace std;

int main(){

int minutos, ii;
cout<<"De cuantos minutos quieres que sea el temporizador?";
cin>> minutos;

for(int j=minutos-1 ; j>=-0; j--){
 ii = 59;
 for(int i= 11; i >=0; i--){
 
 system("cls");
 cout<<j<<":" <<i<<endl;
 cout<< "\a";
  Sleep(1000);
 }


}
}