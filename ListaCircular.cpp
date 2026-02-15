#include <iostream>
#include "ListaCircular.h"
using namespace std;

ListaCircular::ListaCircular()
{
    cabeza = nullptr;
}

void ListaCircular::insertar(int valor) 
{
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->dato = valor;
    if (cabeza == nullptr) 
    {
        cabeza = nuevoNodo;
        nuevoNodo->siguiente = nuevoNodo;
    }
    else
    {
        Nodo* temp = cabeza;
        while (temp->siguiente != cabeza) 
        {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
        nuevoNodo->siguiente = cabeza;
    }
}

void ListaCircular::eliminarInicio()
{
    if (cabeza == nullptr)
    {
        mostrar();
    }
    else if (cabeza->siguiente == cabeza)
    {
        delete cabeza;
        cabeza = nullptr;
    }
    else
    {
        Nodo* ultimo = cabeza;
        while (ultimo->siguiente != cabeza)
        {
            ultimo = ultimo->siguiente;
        }
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        ultimo->siguiente = cabeza;
        delete temp;
        cout << "Nodo eliminado al inicio." << endl;
    }
}

void ListaCircular::eliminarFinal()
{
    if (cabeza == nullptr)
    {
        mostrar();
    }
    else if (cabeza->siguiente == cabeza)
    {
        delete cabeza;
        cabeza = nullptr;
    }
    else
    {
        Nodo* ultimo = cabeza;
        while (ultimo->siguiente->siguiente != cabeza)
        {
            ultimo = ultimo->siguiente;
        }
            Nodo* temp = ultimo->siguiente;
            ultimo->siguiente = cabeza;
            delete temp;
            cout << "Nodo eliminado al final." << endl;
    }
}

void ListaCircular::eliminarMedio(int indice)
{
    int contador;
    if (cabeza == nullptr)
    {
        mostrar();
    }
    if (indice == 1)
    {
        eliminarInicio();
        return;
    }
    Nodo* anterior = cabeza;
    contador = 1;
    while(contador < indice-1 && anterior->siguiente != cabeza)
    {
        anterior = anterior->siguiente;
        contador++;
    }
    if (anterior->siguiente == cabeza)
    {
        cout << "Índice invalido" << endl;
        return;
    }
    Nodo* temp = anterior->siguiente;
    anterior->siguiente = anterior->siguiente->siguiente;
    delete temp;
    cout << "Nodo en posición " << indice << " eliminada." << endl;
}

void ListaCircular::mostrar() 
{
    if (cabeza == nullptr)
    {
        cout << "La lista está vacía." << endl;
        return;
    }
    Nodo* temp = cabeza;
    do 
    {
        cout << "[" << temp->dato << "] ";
        temp = temp->siguiente;
    }
    while (temp != cabeza);
    cout << endl;
}