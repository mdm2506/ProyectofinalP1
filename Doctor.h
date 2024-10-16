class Doctor: public Persona{
protected:
	char especialidad[25];
	
public:
	//Constructur Default 
	Doctor() : Persona() {
		strcpy(this->especialidad, "");
	}
	//Constructor con parametros 
	Doctor(const char* nombre,int edad,int identificacion, const char* especialidad) 
		:Persona(nombre,edad,identificacion){
		strncpy(this->especialidad, especialidad, sizeof(this->especialidad) - 1);
		this->especialidad[sizeof(this->especialidad) - 1] = '\0';
	}
	//Setters 
	void setEspecialidad(char *especialidad){
		strncpy(this->especialidad, especialidad, sizeof(this->especialidad) - 1);
		this->especialidad[sizeof(this->especialidad) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	//Getters
	char * getEspecialidad(){
		return this->especialidad;
	}
		string toString()override {
			stringstream salida;
			salida 
				<< "Nombre: "<< getNombre() << "\n"
				<< "Edad: "<< getEdad() << "\n"
				<< "Identificacion: "<< getIdentificacion() << "\n"
				<< "Especialidad: "<< getEspecialidad() << "\n";
			cout<<endl;
			return salida.str();
		}
	void diagnosticos(){
		
	}
	virtual void tratoAnimales()=0;
	void preescribirMedicina(){
		
	}
	 virtual double calcularCosto()=0;
};
