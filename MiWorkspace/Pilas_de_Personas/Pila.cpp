#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}
void Pila::insertar(Persona* p){
    pNodoPila nuevo;
    nuevo = new NodoPila(p, ultimo);
    ultimo = nuevo;
    longitud++;
}
Persona* Pila::extraer(){
    pNodoPila nodo;
    Persona* p;
    if(!ultimo)
        return 0;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    p = nodo->valor;
    longitud--;
    delete nodo;
    return p;
}
Persona* Pila::cima(){
    if(!ultimo)
        return 0;
    return ultimo->valor;
}
void Pila::mostrar(){
    pNodoPila aux = ultimo;
    cout << "El contenido de la pila es: ";
    while(aux){
        cout << "-> ";
        aux->valor->mostrar();
        aux = aux->siguiente;
    }
    cout << endl;
}
int Pila::getLongitud(){
    return this->longitud;
}
Pila::~Pila()
{
    pNodoPila aux;
    while(ultimo){
        aux = ultimo;
        ultimo = ultimo->siguiente;
        delete aux;
    }
}
