#include <windows.h>
#include <iostream>
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysql.h"	       //Ruta donde se encuenta la bliblioteca mysql.h
#include "C:/Program Files/MySQL/MySQL Server 5.7/include/mysqld_error.h"  //Ruta donde se encuenta la bliblioteca mysql.h//
#include <iomanip> //biblioteca para el manejo de espacio entre columnas

using namespace std;
 MYSQL           *objDatos;
int main() {
 
// Intentar iniciar MySQL:
  if(!(objDatos = mysql_init(0))) {
      // Imposible crear el objeto objDatos
      cout << "ERROR: imposible crear el objeto objDatos." << endl;          
      return 1;
      
  };
  
 if(mysql_real_connect(objDatos, "127.0.0.1", "root", "Desarrollo", "proyectofinalprogra1", 3306, NULL, 0))
 {
 	// Hacer una consulta con el comando "SELECT * FROM alumnos":
	   if(mysql_query(objDatos, "SELECT a.carne,a.nombres, a.apellidos, b.desc_grado grado FROM proyectofinalprogra1.tbl_alumnos a, proyectofinalprogra1.tbl_grados b WHERE  a.cod_grado = b.cod_grado")) 
	     {
	      // Error al realizar la consulta:
	      cout << "ERROR AL EJECUTAR CONSULTA, CONTACTE A SU PROVEEDOR: " <<  mysql_error(objDatos) << endl;
	      mysql_close(objDatos);
	      //rewind(stdin);
	      //getchar();
	      return 2;
	     }
	    else
	     {	
          /* Obteniendo el resultado de la consulta */ 
          MYSQL_RES * resultado = mysql_store_result(objDatos);

         /*Obteniendo el número de filas afectadas */
         // unsigned long filas_afectadas = mysql_num_rows(resultado);

          //cout << "Filas afectadas: " << filas_afectadas << endl;

          /* Recorrer fila a fila */
          MYSQL_ROW row;
          cout<<"                 **  L I S T A D O  D E  A L U M N O S  **    \n\n";
          
           //Encabezado reporte
		   cout << left << setw(15) << setfill(' ') << "Carne";
           cout << left << setw(15) << setfill(' ') << "Nombres";
           cout << left << setw(15) << setfill(' ') << "Apellidos";
           cout << left << setw(0)  << setfill(' ') << "Grado\n";
            
              while(row=mysql_fetch_row(resultado))
              {
               
			   // Detalle
                cout << left << setw(15) << setfill(' ') << row[0];
                cout << left << setw(15) << setfill(' ') << row[1];
                cout << left << setw(15) << setfill(' ') << row[2];
                cout << left << setw(10) << setfill(' ') << row[3]<<"\n";
             }

          // Liberar el resultado de la consulta
          mysql_free_result(resultado);

       }
 }
 else
 {
 	cout<<"Conexion fallida \n"<<mysql_error(objDatos);
 }

	return 0;
}
