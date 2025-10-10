#include "NodoPila.hpp"

NodoPila::NodoPila(Persona* p, NodoPila* sig)
{
    valor = p;
    siguiente = sig;
}

NodoPila::~NodoPila()
{
}
