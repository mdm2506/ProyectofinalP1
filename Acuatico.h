class Acuatico : public Animal {
public:
	// Constructor por defecto
	Acuatico() : Animal() {}
	
	// Constructor parametrizado
	Acuatico(const char* especie, const char* nombre, const char* historialMedico, int edad)
		:  Animal(especie, nombre, historialMedico, edad) {}
	
	// Sobrescritura de emitirSonido para un Acuatico
	string emitirSonido() const override {
		return "*Acuatico*";
	}
	

};
