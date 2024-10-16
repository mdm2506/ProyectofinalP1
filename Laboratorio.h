class Laboratorio{
private:
	char  nombreExamen[25];
	char  resultados[25];
public:
	
	Laboratorio(){
		strcpy(this->nombreExamen, "");
		
		
		strcpy(this->resultados, "");
	}
	
	Laboratorio(const char*  nombreExamen,const char*  resultados){
		strncpy(this->nombreExamen, nombreExamen, sizeof(this->nombreExamen) - 1);
		this->nombreExamen[sizeof(this->nombreExamen) - 1] = '\0'; 
		strncpy(this->resultados, resultados, sizeof(this->resultados) - 1);
		this->resultados[sizeof(this->resultados) - 1] = '\0';
	}

	void setNombreExamen( char *nombreExamen){
		strncpy(this->nombreExamen, nombreExamen, sizeof(this->nombreExamen) - 1);
		this->nombreExamen[sizeof(this->nombreExamen) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	void setResultados(char *resultados){
		strncpy(this->resultados, resultados, sizeof(this->resultados) - 1);
		this->resultados[sizeof(this->resultados) - 1] = '\0'; // Para asegurarse que no haya desbordamiento
	}
	char * getNombreExamen(){
		return this->nombreExamen;
	}
	char * getResultados(){
		return this->resultados;
	}
	
	void registrarResultadosExamen() {
		cout << "Ingrese los resultados para el examen " << nombreExamen << ": ";
		cin>>resultados;
		cout << "Resultados registrados: " << resultados << endl;
	}
	void solicitarExamenes() {
		cout << "Solicitando examen: " << nombreExamen << endl;
	}
	
	string toString(){
		stringstream salida;
		salida<<"nombreExamen del examen: "<<nombreExamen<<endl
			<<"Resultados: "<<resultados<<endl;
		return salida.str();
	}
};
