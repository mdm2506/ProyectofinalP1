class Persona{
protected:
	char nombre[25];
	int edad;
	int identificacion;
public:
	Persona():edad(0),identificacion(0){
		strcpy(this->nombre, "");
	}
	
	Persona(const char* nombre,int edad,int identificacion)
	:edad(edad),identificacion(identificacion){
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0';
	}
	char * getNombre(){
		return this->nombre;
	}
	int getEdad(){
		return this->edad;
	}
	int getIdentificacion(){
		return this->identificacion;
	}
	void setNombre( char *nombre){
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setEdad(int edad){
		this->edad=edad;
	}
	void setIdentificacion(int identificacion){
		this->identificacion=identificacion;
	}

	string virtual toString(){
		stringstream salida;
		salida<<"nombre: "<<nombre<<endl
			<<"Edad: "<<edad<<endl
			<<"identificacion: "<<identificacion<<endl;
		return salida.str();
	}
		
	
};
