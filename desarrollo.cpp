#include <iostream>

using namespace std;

int main(){
	string variable_cadena="CADENA DE TEXTO ABCs";
	cout<<"HI WORD"<<endl;
	cout<<variable_cadena<<endl;
	int numero_entero=15;
	cout<<"Numero entero "<< numero_entero <<endl;
	cout<< variable_cadena.length()<<endl;
	cout<< variable_cadena[0] <<endl;
	cout<< variable_cadena.find("TEXTO")<<endl;
	cout<< variable_cadena.substr(3,5);
	return 0;
}
