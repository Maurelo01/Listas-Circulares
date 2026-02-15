#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H

struct Nodo 
{
    int dato;
    Nodo* siguiente;
};

class ListaCircular 
{
    private:
        Nodo* cabeza;
    public:
        ListaCircular();
        void insertar(int valor);
        void eliminarInicio();
        void eliminarFinal();
        void eliminarMedio(int indice);
        void mostrar();
};

#endif