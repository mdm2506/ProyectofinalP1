class Fecha{
private:
	int dia;
	int mes;
	int annio;
	int hora;
public:
	Fecha(){
		this->dia = 0;
		this->mes = 0;
		this->annio = 0;
	}
	Fecha(int dia, int mes, int annio,int hora){
		setMes(mes);
		setDia(dia);
		setAnnio(annio);
		setHora(hora);
	}
		void setDia(int dia) {
			int diasmes[]={0,31,28,31,30,31, 30, 31, 31, 30, 31, 30, 31};
			if (annio%4==0) {
				diasmes[2]=29;
			} else {
				diasmes[2]=28;
			}
			if ( dia > 0 && dia <= diasmes[mes] ){
				this->dia=dia;   
			}else{
				cout<<"Dia invalido("<<dia<<") se establece en 1"<<endl;
				this->dia=1;
			}
		}
		int getDia() {
			return this->dia;
		}
		void setMes(int mes) {
			if(mes>=1 && mes<=12){
				this->mes=mes;
			}else{
				cout<<"Mes invalido("<<mes<<") se establece 1"<<endl;
				this->mes=1;
			}
			
			
		}
		
		int getMes() {
			return this->mes;
		}
		void setAnnio(int annio) {
			this->annio = annio;
		}
		
		int getAnnio() {
			return this->annio;
		}
		void setHora(int hora) {
			this->hora = hora;
		}
		
		int getHora() {
			return this->hora;
		}
		string toString(){
			std::stringstream out; //variable para concatenar texto
			out<<this->dia<<"/"<<this->mes<<"/"<<this->annio<<endl
				<<"Hora:"<<this->hora; 
			return out.str();
		}
};
