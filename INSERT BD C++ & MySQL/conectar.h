#include "C:/Program Files/MySQL/MySQL Connector.C 6.1/include/mysql.h"
#include "C:/Program Files/MySQL/MySQL Connector.C 6.1/include/mysqld_error.h"
class conectar{
	public:
	 void conectar_con_mysql(MYSQL *ObjDatos);	
};
void conectar::conectar_con_mysql(MYSQL *ObjDatos){
  if(mysql_real_connect(ObjDatos,"127.0.0.1","root","Desarrollo","db_colegio",3306,NULL,0)){
  std::cout<<"Conexion a DB...Ok!\n";	
  }
  else{
   std::cout<<"Error al conectar a DB\n"<<mysql_error(ObjDatos);	
  }
 }
