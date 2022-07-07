#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//Declaraciones de variables char y enteros
int num,res=0;
char ciclo=0;

using namespace std;
//Ciclo for para ingreso de numeros
for(ciclo=0;ciclo<10;ciclo++) {
//Ingresa numero por numero   
  cout<<"ingrese el dato::     ";
//Recibir variables 
  cin>>num;
//Condicion si numero menor que 20  
if (num<=20){
//Contador de numeros	
   res=(res+1); 
   }
//Condicion cierre de Ciclo   
if (ciclo==9){
//Imprimir en Pantalla el Contador de numeros	
   cout<<"menores a 20 son :  ";
   cout<<res;
 }	
}
return 0;
}
