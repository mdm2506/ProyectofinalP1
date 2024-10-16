class Mamifero : public Animal {
public:
	// Constructor por defecto
	Mamifero() : Animal() {}
	
	// Constructor parametrizado
	Mamifero(const char* especie, const char* nombre, const char* historialMedico, int edad)
		: Animal(especie, nombre, historialMedico, edad) {}
	
	// Sobrescritura de emitirSonido para un Mamifero
	string emitirSonido() {
		return "*Mamifero*";
	}
	
	
};
