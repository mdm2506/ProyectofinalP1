class Animal {
protected:
	char especie[25];
	char nombre[25];
	char historialMedico[25];
	int edad;
	
public:
	
	Animal() : edad(0) {
		strcpy(this->especie, "");
		strcpy(this->nombre, "");
		strcpy(this->historialMedico, "");
	}
	
	
	Animal(const char* especie, const char* nombre, const char* historialMedico, int edad)
		: edad(edad) {
		strncpy(this->especie, especie, sizeof(this->especie) - 1);
		this->especie[sizeof(this->especie) - 1] = '\0';
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0'; 
		strncpy(this->historialMedico, historialMedico, sizeof(this->historialMedico) - 1);
		this->historialMedico[sizeof(this->historialMedico) - 1] = '\0';
	}
	
	void setNombre( char *nombre){
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setEspecie(char *especie){
		strncpy(this->especie, especie, sizeof(this->especie) - 1);
		this->especie[sizeof(this->especie) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setHistorialMedico(char *historialMedico){
		strncpy(this->historialMedico, historialMedico, sizeof(this->historialMedico) - 1);
		this->historialMedico[sizeof(this->historialMedico) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	char * getNombre(){
		return this->nombre;
	}
	char * getEspecie(){
		return this->especie;
	}
	char * getHistorialMedico(){
		return this->historialMedico;
	}
	virtual string emitirSonido()const=0;
	
	
	string toString() const {
		stringstream salida;
		salida << "Especie: " << especie <<"\nNombre: " << nombre << "\nEdad: " << edad << "\nHistorial Médico: " << historialMedico<<endl;
		return salida.str();
	}
	

};
