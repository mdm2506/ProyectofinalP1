class Administrativo:public Persona{
	
public:
	Administrativo():Persona(){}
		
	Administrativo(const char* nombre,int edad,int identificacion)
		:Persona(nombre,edad,identificacion){}
	
	void gestionarCitas(/*Cita cita*/) {
		//cout << "Cita gestionada para: " << cita.getPaciente() << " el " << cita.getFecha() << endl;
	}
	void ManejarRegistros() {
		//cout << "Registro añadido para: " << animal.getNombre() << endl;
	}
	
	
	
	
	
	
	
	
};
