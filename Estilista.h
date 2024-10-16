class Estilista : public Doctor{
private:
	
public:
	//Constructor Default Heredado
	Estilista() : Doctor() {}
	//Constructor con parametros Heredado
	Estilista(const char* nombre,int edad,int identificacion, const char* especialidad)
		: Doctor(nombre, edad, identificacion, especialidad){}
	
	void tratoAnimales(){
		cout<<"Indique la especialidad del estilista que desea para su mascota: <Corte y peinado-Limpieza general-Ducha y secado>";
		cin>>especialidad;
		if (strcmp(especialidad, "Corte y peinado") == 0) {
			cout<<"Se realizara un corte de cabello y peinado detallado de su mascota.";
		}else if(strcmp(especialidad, "Limpieza general") == 0){
			cout<<"Se realizara una limpieza general de su mascota incluyendo oidos y ojos para prevenir infecciones.";
		}else if(strcmp(especialidad, "Ducha y secado")==0){
			cout<<"Se hara una ducha completa y se utilizaran productos adecuados para el tipo de piel y pelaje de su mascota.";
		}
	}
		double calcularCosto(){
			if (strcmp(especialidad, "Corte y peinado") == 0) {
				cout<<"El costo del corte y peinado de su mascota es de: USD 50";
				return 50;
			}else if(strcmp(especialidad, "Limpieza general") == 0){
				cout<<"El costo de la limpieza general de su mascota es de: USD 80";
				return 80;
			}else if(strcmp(especialidad, "Ducha y secado")==0){
				cout<<"El costo de la ducha y secado de su mascota es de: USD 35";
				return 35;
			}
		}
};
