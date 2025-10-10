#ifndef NODOPILA_HPP
#define NODOPILA_HPP
#include <iostream>
#include "Persona.hpp"
using namespace std;

class NodoPila
{
public:
    NodoPila(Persona* p = NULL, NodoPila* sig = NULL);
    ~NodoPila();

private:
    Persona* valor;
    NodoPila* siguiente;
    
    friend class Pila;
    friend class Persona;
};

typedef NodoPila* pNodoPila;

#endif // NODOPILA_HPP
