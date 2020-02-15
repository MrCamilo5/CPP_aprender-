#include <iostream>

using namespace std;

int main(){
	int edad;
	string nombre;
//	cout<< "Ingrese su edad ";
//	cin>> edad;
//	cout<<"TIENES "<<edad<<" anos"<<endl;
	cout<<"Ingresa tu nombre: "<<endl;
	getline(cin, nombre);
	cout<<"Hola "<<nombre<<endl;
	return 0;
}
