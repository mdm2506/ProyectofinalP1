class ContenedorSeguridadEstilo{
private:
	int cantidad;
	string username;
	string password;
	
	
public:
	ContenedorSeguridadEstilo(string username, string password) {
		this->username = username;
		this->password = password;
	}
	void leerCredenciales() {
	// Abrir el archivo de credenciales
	string linea;
	
	ifstream archivo("usernames.txt");
	if (!archivo.is_open()) {
		cerr << "Error: No se pudo abrir el archivo de credenciales." << endl;
		return;
	}
	getline(archivo,linea);
	stringstream ss (linea);
	getline(ss, username, ' ');
	getline(ss, password, ' ');
	archivo.close();
}
void actualizarArchivo() {
	ofstream archivo("usernames.txt");
	if (!archivo.is_open()) {
		cerr << "Error: No se pudo abrir el archivo para escritura." << endl;
		return;
	}
	
	archivo << username << " " << password << endl;
	archivo.close();
}

bool verificar(string usernameIngresado, string passwordIngresada) {
	ifstream archivo("usernames.txt");
	if (!archivo.is_open()) {
		cerr << "Error: No se pudo abrir el archivo de credenciales." << endl;
		return false;
	}
	
	// Leer el nombre de usuario y la contraseña del archivo
	string usernameArchivo, passwordArchivo;
	if (!(archivo >> usernameArchivo >> passwordArchivo)) {
		cerr << "Error: No se pudieron leer las credenciales del archivo." << endl;
		archivo.close();
		return false;
	}
	
	archivo.close();
	
	// Comparar las credenciales ingresadas con las del archivo
	return (usernameIngresado == usernameArchivo && passwordIngresada == passwordArchivo);
}


void cambiarContrasenia( string nuevapassword) {
	// Actualización de la contraseña en la instancia actual
	password = nuevapassword;
	
	// Actualización en el archivo de texto
	actualizarArchivo();
	
	cout << "Contrase"<<char(164)<<"a cambiada exitosamente." << endl;
}
void cambiarUsuario(string nuevousername) {
	// Actualización del nombre de usuario en la instancia actual
	username = nuevousername;
	
	// Actualización en el archivo de texto
	actualizarArchivo();
	
	cout << "Nombre de usuario cambiado exitosamente." << endl;
}
void guardarConfiguracionColores(int colorFondo, int colorTexto) {
	ofstream archivo("configuracion_colores.txt");
	if (archivo.is_open()) {
		archivo << colorFondo << " " << colorTexto << endl;
		archivo.close();
	} else {
		cout << "Error al abrir el archivo de configuración de colores." << endl;
	}
}

void cargarConfiguracionColores() {
	ifstream archivo("configuracion_colores.txt");
	if (archivo.is_open()) {
		int colorFondo, colorTexto;
		archivo >> hex >> colorFondo >> hex >> colorTexto;
		archivo.close();
		aplicarColoresPersonalizados(colorFondo, colorTexto);
	} else {
		cout << "No se encontró un archivo de configuración de colores previo." << endl;
	}
}
void aplicarColoresPersonalizados(int colorFondo, int colorTexto) {
	string comando = "color ";
	comando += to_string(colorFondo);
	comando += to_string(colorTexto);
	system(comando.c_str());
}
};
