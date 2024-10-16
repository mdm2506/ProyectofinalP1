class Ave : public Animal {
public:
	// Constructor por defecto
	Ave() : Animal() {}
	
	// Constructor parametrizado
	Ave(const char* especie, const char* nombre, const char* historialMedico, int edad)
		:Animal(especie, nombre, historialMedico, edad){}
	
	// Sobrescritura de emitirSonido para un ave
	string emitirSonido() const override {
		return "*Ave*";
	}
	
};
