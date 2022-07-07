#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
//Declaraciones de variables char y enteros
int num,res,conta;
char ciclo=1;

using namespace std;
//Ciclo for para ingreso de numeros
for(ciclo=1;ciclo<=20;ciclo++) {
conta=(ciclo/2);
num=int(conta);
res=(num*2);
if (res==ciclo){
   cout<<res<<endl;
}
}
return 0;
}
