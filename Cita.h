class Cita {
private:
	Fecha fecha;
	char motivo[25];
	Laboratorio lab;
	
public:
	
	Cita(){
		strcpy(this->motivo, "");
	}
	
	
	Cita(Fecha fecha, const char*  motivo, Laboratorio lab) 
		: fecha(fecha),lab(lab) {
		strncpy(this->motivo, motivo, sizeof(this->motivo) - 1);
		this->motivo[sizeof(this->motivo) - 1] = '\0';
	}
	
	void setFecha(Fecha nuevaFecha) { fecha = nuevaFecha; }
	void setMotivo(char *motivo){
		strncpy(this->motivo, motivo, sizeof(this->motivo) - 1);
		this->motivo[sizeof(this->motivo) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setLaboratorio(Laboratorio nuevoLab) { lab = nuevoLab; }
	Laboratorio getLaboratorio() const { return lab; }
	Fecha getFecha() const { return fecha; }
	char * getMotivo(){
		return this->motivo;
	}
	void crearCita() {
		cout << "Cita creada para el " << fecha.toString() << " con motivo: " << motivo << endl;
	}
	
	void crearCita(Laboratorio lab) {
		cout << "Cita creada para el " << fecha.toString() << " con motivo: " << motivo << endl;
		cout << "Examen de laboratorio asignado por: " << lab.getNombreExamen() << endl;
	}
	
	
	string toString() {
		stringstream salida;
		salida << "Cita el: " << fecha.toString() << "\nMotivo: " << motivo << endl
			<< "Laboratorio: " << lab.getNombreExamen() << endl;
		return salida.str();
	}
};
