// Define cual de los tres numeros ingresados es mayor //
// Wilmer Estuardo Gomez, Estudiante de ingenieria    //

#include<iostream>

using namespace std;

int main ()
{
	int N1,N2,N3;
	
	cout <<"INGRESE TRES DIGITOS: ";
	cin >>N1;
	cin >>N2;
	cin >>N3;
	
	if (N1>N2 && N1>N3){
		cout<<"EL PRIMER DIGITO ES EL MAYOR";
	}
	
	if (N2>N1 && N3<N2){	
		cout<<"EL SEGUNDO DIGITO ES EL MAYOR";
	}
		
	if (N3>N1 && N2<N3){
		cout<<"EL TERCER DIGITO ES EL MAYOR";
	}
	
	if (N1==N2 && N2==N1 && N2==N3 && N3==N2){
		cout<<"LOS TRES DIGITOS SON IGUALES";
	}
	
	return 0;
	
}
	
