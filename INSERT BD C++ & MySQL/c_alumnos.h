class c_alumnos{
	
	//Propiedades
	private:
	char* carnet;
	char* primer_nombre;
	char* segundo_nombre;
	char* primer_apellido;
	char* segundo_apellido;
	
	//Metodos
	public:
	int c_guarda_estudiante(MYSQL* ObjDatos, char *consulta, char *sentencia){
	int nResul;	
		//Formatea cadena entes de enviar a BD
		sprintf(consulta,sentencia, carnet, primer_nombre, segundo_nombre, primer_apellido, segundo_apellido);
	 	
	    if(!mysql_query(ObjDatos, consulta)){
	    	nResul =0;
		}
		else{
			nResul=1;
		}
	return nResul;
	}
	
//Setters
void set_carnet(char* pCarnet){
	carnet=pCarnet;
}
void set_PrimerNombre(char* pPrimerNombre){
	primer_nombre=pPrimerNombre;
}
void set_SegundoNombre(char* pSegundoNombre){
	segundo_nombre=pSegundoNombre;
}
void set_PrimerApellido(char* pPrimerApellido){
	primer_apellido=pPrimerApellido;
}
void set_SegundoApellido(char* pSegundoApellido){
	segundo_apellido=pSegundoApellido;
}
//Getters	
		
};
