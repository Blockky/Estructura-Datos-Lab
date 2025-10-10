#include "Persona.hpp"

Persona::Persona(int edad)
{
    this->edad=edad;
	this->genero =(rand()%2);
	this->generarDNI();
}
int Persona::getEdad(){
	return this->edad;
}
bool Persona::esMujer(){
	return this->genero; //1:mujer,0:hombre
}
void Persona::setEdad(int edad){
	this->edad=edad;
}
void Persona::mostrar(){
	string sexo = "Hombre";
	if(genero)
		sexo ="Mujer";
	cout <<setw(10)<< sexo<<" con DNI "<<DNI<<" tiene "<<edad<<" anyos "<<endl;
}
void Persona::generarDNI(){
	char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
	int numDNI = 0, aux =1E7;
	for(int i=0;i<8;i++){
		int num = rand()%10;
		this->DNI[i]='0'+num;
		numDNI = numDNI +num*aux;
		aux/=10;
	}
	this->DNI[8] =letras[numDNI%23];
	this->DNI[9]='\0';
}
Persona::~Persona()
{
}
