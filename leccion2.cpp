#include<iostream>
#include<cmath>

using namespace std;

void Dihola(string nombre, int edad);

int main(){
	Dihola("Cristian", 21);
	Dihola("Andres", 12);
	Dihola("F FOR RESPECT", 15);
	return 0;
}

void Dihola(string nombre , int edad){
	cout<<"HOLA "<<nombre<<" TU EDAD ES "<<edad<<endl;
}
