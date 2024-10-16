class Dueno: public Persona{
private:
	vector<Animal*> mascotasRegistradas; 
public:
	Dueno():Persona(){}
	
	Dueno(const char* nombre,int edad,int identificacion)
	:Persona(nombre,edad,identificacion){}
	void agregarMascota(Animal* mascota) {
		mascotasRegistradas.push_back(mascota);
	}

	
	string toString()override{
		stringstream salida;
		salida<<"nombre: "<<nombre<<endl
			<<"Edad: "<<edad<<endl
			<<"identificacion: "<<identificacion<<endl
			<< "Cantidad de mascotas registradas: " << mascotasRegistradas.size() << endl;
		return salida.str();
	}

	
	
};
