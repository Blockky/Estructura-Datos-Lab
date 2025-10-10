#include <Pila.hpp>

int main(int argc, char** argv){
    Persona* p0 = new Persona(18);
    Persona* p1 = new Persona(23);
    Pila pila;
    
    pila.insertar(p0);
    pila.mostrar();
    pila.insertar(p1);
    pila.mostrar();
}