class Medicina {
private:
	char nombre[25];
	char dosis[25];
	Fecha fechaVen;
	
public:
	
	Medicina() {
		strcpy(this->nombre, "");
		
		
		strcpy(this->dosis, "");
	}
	
	
	Medicina(const char* nombre, const char* dosis, Fecha fechaVen) 
		:fechaVen(fechaVen) {
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0'; 
		strncpy(this->dosis, dosis, sizeof(this->dosis) - 1);
		this->dosis[sizeof(this->dosis) - 1] = '\0';
	}
	
	char * getNombre(){
		return this->nombre;
	}
	char * getDosis(){
		return this->dosis;
	}
	Fecha getFechaVen() const { return fechaVen; }
	
	
	void setNombre( char *nombre){
		strncpy(this->nombre, nombre, sizeof(this->nombre) - 1);
		this->nombre[sizeof(this->nombre) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setDosis(char *dosis){
		strncpy(this->dosis, dosis, sizeof(this->dosis) - 1);
		this->dosis[sizeof(this->dosis) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setFechaVen(Fecha nuevaFechaVen) { fechaVen = nuevaFechaVen; }
	
	// Método toString para mostrar la información de la medicina
	string toString() const {
		return "Medicina: " + nombre + "\nDosis: " + dosis + "\nFecha de Vencimiento: " + fechaVen.toString();
	}
};
