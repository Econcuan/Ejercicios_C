#include<iostream>

using namespace std;

int main(){
	
	float practica,teorica,participacion,Nota_Final =0;
	
	cout<<"digite la nota de practica: ", cin>>practica;
	cout<<"digite la nota de teorica: ", cin>>teorica;
	cout<<"digite la nota de participacion: ", cin>>participacion;
	
		practica *= 0.30;
		teorica *=0.60;
		participacion *= 0.10;
		
		Nota_Final = practica + teorica + participacion; 
		
		cout<<"\nLa nota final es: "<<Nota_Final;
	

	
	return 0;
	
}
