class EspecialistaEnCirugia : public Doctor{
private:
	
public:
	//Constructor Default Heredado
	EspecialistaEnCirugia() : Doctor() {}
	//Constructor con parametros Heredado
	EspecialistaEnCirugia(const char* nombre,int edad,int identificacion, const char* especialidad)
		: Doctor(nombre, edad, identificacion, especialidad){}
	
	void tratoAnimales(){
		cout<<"Indique el tipo de cirugia que desea para su mascota: <Emergencias-Neurologica-Oncologica>";
		cin>>especialidad;
		if (strcmp(especialidad, "Emergencias") == 0) {
			cout << "Se realizaran procedimientos de urgencia en casos de trauma, hemorragias internas, torciones gastricas, entre otros." << endl;
		} else if (strcmp(especialidad, "Neurologica") == 0) {
			cout << "Se haran procedimientos de revision cerebral, medula espinal y los nervios perifericos." << endl;
		} else if (strcmp(especialidad, "Oncologica") == 0) {
			cout << "Se realizaran intervenciones para extirpar tumores, como parte de tratamiento de cancer o para prevenir que se propaguen." << endl;
		} else {
			cout << "Especialidad no reconocida." << endl;
		}
	}
	double calcularCosto() {
		if (strcmp(especialidad, "Emergencias") == 0) {
			cout << "El costo de la cirugia de emergencia es de: USD 2500" << endl;
			return 2500;
		} else if (strcmp(especialidad, "Neurologica") == 0) {
			cout << "El costo de la cirugia neurologica es de: USD 4500" << endl;
			return 4500;
		} else if (strcmp(especialidad, "Oncologica") == 0) {
			cout << "El costo de la cirugia oncologica es de: USD 3250" << endl;
			return 3250;
		} else {
			cout << "Especialidad no reconocida." << endl;
			return 0; 
		}
	}
};
