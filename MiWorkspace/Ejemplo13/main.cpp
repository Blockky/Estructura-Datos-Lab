#include "Persona.hpp"

int main(int argc, char** argv){
    for(int i=0; i<10; i++){
        Persona* p = new Persona(18+i);
        p->mostrar();
    }
    return 0;
}