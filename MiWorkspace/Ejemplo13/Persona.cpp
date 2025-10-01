#include "Persona.hpp"

Persona::Persona(int e)
{
    genero = 1;
    strcpy(DNI, "12345678A");
    edad = e;
}
bool Persona::esMujer()
{
    return this->genero;
}
int Persona::getEdad()
{
    return this->edad;
}
void Persona::setEdad(int e)
{
    this->edad = e;
}
void Persona::mostrar()
{
    cout << "DNI: " << DNI << ", edad: " << edad << endl;
}
Persona::~Persona()
{
}