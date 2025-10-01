#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <cstring>
using namespace std;

class Persona
{
private:
    bool genero;
    int edad;
    char DNI[10];
    
public:
    Persona(int e);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int e);
    void mostrar();
};

#endif // PERSONA_HPP
