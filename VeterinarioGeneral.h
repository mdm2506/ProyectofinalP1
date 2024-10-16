class VeterinarioGeneral : public Doctor{
private:
	
public:
	//Constructor Default Heredado
	VeterinarioGeneral() : Doctor() {}
	//Constructor con parametros Heredado
	VeterinarioGeneral(const char* nombre,int edad,int identificacion, const char* especialidad)
		: Doctor(nombre, edad, identificacion, especialidad){}
	
	void tratoAnimales() {
		cout << "Indique que tipo de cuidado o trato necesita su mascota: <Urgencias-Comportamiento-Paliativos> ";
		cin >> especialidad;
		if (strcmp(especialidad, "Urgencias") == 0) {
			cout << "Le brindaremos al animal el trato mas rapido posible y nos enfocaremos en salvar la vida del animal." << endl;
		} else if (strcmp(especialidad, "Comportamiento") == 0) {
			cout << "Trataremos la salud fisica y mental del animal y brindaremos un asesoramiento de como manejar los problemas de comportamiento en su mascota." << endl;
		} else if (strcmp(especialidad, "Paliativos") == 0) {
			cout << "Se haran pruebas de enfermedades terminales o dolores cronicos, asegurandonos de que el animal tenga la mejor vida posible." << endl;
		} else {
			cout << "Tipo de cuidado no reconocido." << endl;
		}
	}
	
	double calcularCosto() {
		if (strcmp(especialidad, "Urgencias") == 0) {
			cout << "El costo de la visita por cuidados Urgencias es de: USD 80" << endl;
			return 80;
		} else if (strcmp(especialidad, "Comportamiento") == 0) {
			cout << "El costo de la visita por trato de Comportamiento es de: USD 150" << endl;
			return 150;
		} else if (strcmp(especialidad, "Paliativos") == 0) {
			cout << "El costo de la visita por cuidados Paliativos es de: USD 180" << endl;
			return 180;
		} else {
			cout << "Tipo de cuidado no reconocido." << endl;
			return 0; 
		}
	}
	
};
