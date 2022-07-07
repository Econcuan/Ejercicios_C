#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(int argc, char** argv) {
	class CREA{
	
	public:
	 //Setters
	 void create()
	 {	
	ifstream archivo("CREAR.txt");
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
	 
	  	
};
return 0;
}

