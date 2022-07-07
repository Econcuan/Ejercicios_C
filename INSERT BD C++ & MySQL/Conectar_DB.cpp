#include <iostream>
#include "conectar.h"
#include "c_alumnos.h"
#include "C:/Program Files/MySQL/MySQL Connector.C 6.1/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Connector.C 6.1/include/mysqld_error.h"

struct estudiante  {
	char carnet[10];
	char primer_nombre [15];
	char segundo_nombre [15];
	char primer_apellido [15];
	char segundo_apellido [15];

} inf_alumnos;


int main(int argc, char** argv) {
char* consulta;
MYSQL *ObjDatos;
c_alumnos GuardaAlumnos;

conectar conn;  
  if(!(ObjDatos = mysql_init(0))){
  	std::cout<<"Error al cargar en Mysql_init\n";  
	return 1;
	}
conn.conectar_con_mysql(ObjDatos);

//solicitando datos al usuario
std::cout<<"\nIngrese carnet: ";
std::cin>>inf_alumnos.carnet;
std::cout<<"\nIngrese primer nombre: ";
std::cin>>inf_alumnos.primer_nombre;
std::cout<<"\nIngrese segundo nombre: ";
std::cin>>inf_alumnos.segundo_nombre;
std::cout<<"\nIngrese primer apellido: ";
std::cin>>inf_alumnos.primer_apellido;
std::cout<<"\nIngrese segundo apellido: ";
std::cin>>inf_alumnos.segundo_apellido;

char sentencia[]="INSERT INTO db_colegio.tbl_alumnos (carnet, primer_nombre, segundo_nombre, primer_apellido, segundo_apellido) VALUES (\'%s\',\'%s\',\'%s\',\'%s\',\'%s\')";
 consulta = new char[strlen(sentencia)+sizeof(estudiante)-sizeof(int)];

//Setear valores a las propiedades
GuardaAlumnos.set_carnet(inf_alumnos.carnet);
GuardaAlumnos.set_PrimerNombre(inf_alumnos.primer_nombre);
GuardaAlumnos.set_SegundoNombre(inf_alumnos.segundo_nombre);
GuardaAlumnos.set_PrimerApellido(inf_alumnos.primer_apellido);
GuardaAlumnos.set_SegundoApellido(inf_alumnos.segundo_apellido);

//Ejecutar la acción para guardar en BD
if(GuardaAlumnos.c_guarda_estudiante(ObjDatos, consulta, sentencia)==0){
	std::cout<<"Alumno grabado con exito..!";
}else{
	std::cout<<"Error al grabar alumno"<<mysql_error(ObjDatos);
}

	return 0;
}
