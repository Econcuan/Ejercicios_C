
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>
//****************************************************°
//****************************************************°
//                                                    °
//  CODIGO CREADO POR EL ESTUDIANTE DE INGENIERIA:    °
//   Ing: WILMER ESTUARDO GOMEZ CONCUAN               °
//   17/05/2018                                       °
//   SISTEMA DE CONTROL DE PROCESOS PARA COLEGIO      °
//   NOMBRE DEL PROYECTO ZEBRA...                     °
//                                                    °
//****************************************************°
//****************************************************°

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


/// METODOS COLORES PARA FUENTES EN EL SISTEMA

//METODO GOTO XY PARA MANEJAR CORDENADAS EN C++ O POCISIONES
void cazul(){
system("color 01");
}
void cverde(){
system("color 02");
}
void caqua(){
system("color 03");
}
void crojo(){
system("color 04");
}
void camarillo(){
system("color 06");
}
void csazul(){
system("color 09");
}


using namespace std;
void gotoxy(int x,int y){  
    HANDLE hcon;  
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos;  
    dwPos.X = x;  
    dwPos.Y= y;  
    SetConsoleCursorPosition(hcon,dwPos);  
 }  


// METODO OPCIONES MENU PRINCIPAL

using namespace std;
int opt=0, optcr=0, optco=0, optas=0;
char nom1[15],nom2[15], ape1[15], ape2[15];
int main(int argc, char** argv) {
	
	
ifstream archivo("MENU PRICIPAL.txt");
    char linea[150];
    long contador = 0L;

   if(archivo.fail())
   cerr << "Error al abrir el archivo Pruebas.txt" << endl;
   else
   while(!archivo.eof())
   {
   archivo.getline(linea, sizeof(linea));
   cout << linea << endl;
   if((++contador % 24)==0)
   {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();

camarillo();
gotoxy(23,2);
cout<<"MENU PRINCIPAL OPCIONES SISTEMA ZEBRA 2018";
gotoxy(30,13);
cout<<"INGRESE SU OPCION POR FAVOR";
gotoxy(30,14);
cin>>opt;

// CONDICION PARA DETERMINAR QUE OPCION SE ELIGE PREVIAMENTE SE ABRE EL ARCHIVO TXT CREACION PARA LEER LA INTERFACE DE USUARIO
// CONDICION 1 PARA VARIABLE OPT, CONDICION DE MENU PRINCIPAL-- CREACION DE SERVICIOS
//...........................................................................................................................................

if(opt==1){
	
    system("cls");
    csazul();
ifstream archivo("CREACION.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())

{
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();
        	
gotoxy(30,15);
cout<<"INGRESE SU OPCION POR FAVOR";
gotoxy(30,16);
opt=0;
cin>>optcr;

//////////////////////////// OPCION 1 CREACION DE ALUMNO
// INTERFACE DE CONDICION 1, CREACION DE SERVICIOS
//................................................................


if(optcr==1){
	
    	
	        system("cls");
caqua();
ifstream archivo("NUEVO ALUMNO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();

gotoxy (32,3);
cin>>nom1;
gotoxy (52,3);
cin>>nom2;
gotoxy (32,6);
cin>>ape1;
gotoxy (52,6);
cin>>ape2;  	
opt=0;


//////////////////////////// OPCION 2 CREACION DE CURSO
// INTERFACE DE CONDICION 2, CREACION DE SERVICIOS
//................................................................

}else if(optcr==2){
	system("cls");

	        system("cls");
caqua();
ifstream archivo("NUEVO CURSO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();

//////////////////////////// OPCION 3 CREACION CATEDRATICO
// INTERFACE DE CONDICION 3, CREACION DE SERVICIOS
//................................................................

	
}else if(optcr==3){
	
	system("cls");
	
caqua();
ifstream archivo("NUEVO PRO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();
	
	
//////////////////////////// OPCION 4 CREACION DE SALONES
// INTERFACE DE CONDICION 4, CREACION DE SERVICIOS
//................................................................
	
	
}else if(optcr==4){
	
	system("cls");
	
caqua();

ifstream archivo("NUEVO SALON.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();
}
}else if(opt==2) {
        	opt=0;
        system("cls");
        cazul();
ifstream archivo("ASIGNACIONES.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo ASIGNACIONES.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();
        	
        	
        	gotoxy(28,13);
        cout<<"INGRESE SU OPCION POR FAVOR";
        gotoxy(28,14);
        cin>>optas;
        	
 // CONDICION PARA DETERMINAR QUE OPCION SE ELIGE PREVIAMENTE SE ABRE EL ARCHIVO TXT ASIGANACION DE ALUMNOS PARA LEER LA INTERFACE DEL USUARIO //
 //  CONDICION 1 PARA LA VARIABLE optas, PARA LA ASIGNACION DE ALUMNOS //

if(optas==1) {
        system("cls");
        caqua();
ifstream archivo("ASIGNACION ALUMNO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo ASIGNACION ALUMNO.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();
        	
        
}
		
		    
 // CONDICION PARA DETERMINAR QUE OPCION SE ELIGE PREVIAMENTE SE ABRE EL ARCHIVO TXT ASIGANACION DE CATEDRATICOS PARA LEER LA INTERFACE DEL USUARIO //
 //  CONDICION 2 PARA LA VARIABLE optas, PARA LA ASIGNACION DE CATEDRATICOS//
			   
if(optas==2) {
        system("cls");
        caqua();
ifstream archivo("ASIGNACION CATEDRATICO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo ASIGNACION CATEDRATICO.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();
}
        	
 // CONDICION PARA DETERMINAR QUE OPCION SE ELIGE PREVIAMENTE SE ABRE EL ARCHIVO TXT ASIGANACION DE SALONES PARA LEER LA INTERFACE DEL USUARIO //
 //  CONDICION 3 PARA LA VARIABLE optas, PARA LA ASIGNACION DE SALONES//       	
        	
        	
if(optas==3) {
        system("cls");
        caqua();
ifstream archivo("ASIGNACION DE SALONES.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo ASIGNACION DE SALONES.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
        if((++contador % 24)==0)
        {
            cout << "CONTINUA...";
            cin.get();
        }
    }
    archivo.close();
 
}
        	
}else if(opt==3){

// CONDICION PARA DETERMINAR QUE OPCION SE ELIGE PREVIAMENTE SE ABRE EL ARCHIVO TXT CREACION PARA LEER LA INTERFACE DE USUARIO
// CONDICION 3 PARA VARIABLE OPT, CONDICION DE MENU PRINCIPAL-EDITAR
//...........................................................................................................................................

system("cls");
cverde();

ifstream archivo("CONSULTA.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();

gotoxy(30,13);
cout<<"INGRESE EL NUMERO DE SU TRANSACCION"<<endl;
gotoxy(30,14);
cin>>optco;
		
if(optco==1){
	
system("cls");
cverde();

ifstream archivo("CONSULTA ALUMNO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();

	
}else if (optco==2){
	
system("cls");
cverde();

ifstream archivo("CONSULTA CATEDRATICO.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();
	
	
	
}else if (optco==3){
	
system("cls");
cverde();

ifstream archivo("CONSULTA SALONES.txt");
    char linea[150];
    long contador = 0L;

    if(archivo.fail())
    cerr << "Error al abrir el archivo Pruebas.txt" << endl;
    else
    while(!archivo.eof())
    {
        archivo.getline(linea, sizeof(linea));
        cout << linea << endl;
    }
archivo.close();
	
	
}
	
	
	
}
	
	




system("PAUSE");
return 0;
}


