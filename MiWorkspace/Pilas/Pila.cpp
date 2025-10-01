#include "Pila.hpp"

Pila::Pila()
{
    ultimo = NULL;
    longitud = 0;
}
void Pila::insertar(int v){
    pNodoPila nuevo;
    nuevo = new NodoPila(v, ultimo);
    ultimo = nuevo;
    longitud++;
}
int Pila::extraer(){
    pNodoPila nodo;
    int v;
    if(!ultimo)
        return 0;
    nodo = ultimo;
    ultimo = nodo->siguiente;
    v = nodo->valor;
    longitud--;
    delete nodo;
    return v;
}
int Pila::cima(){
    if(!ultimo)
        return 0;
    return ultimo->valor;
}
void Pila::mostrar(){
    pNodoPila aux = ultimo;
    cout << "\tEl contenido de la pila es: ";
    while(aux){
        cout << "-> " << aux->valor;
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
