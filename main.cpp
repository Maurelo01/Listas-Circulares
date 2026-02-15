#include <iostream>
#include "ListaCircular.h"
using namespace std;

int main() 
{
    ListaCircular lista;
    int valor;
    int opcion = 0;
    int indice;
    while (opcion != 5)
    {
        cout << "Lista Circular: " << endl;
        lista.mostrar();
        cout << " MENU" << endl;
        cout << "1. Insertar nodo" << endl;
        cout << "2. Eliminar nodo al inicio" << endl;
        cout << "3. Eliminar nodo al final" << endl;
        cout << "4. Eliminar nodo en posicion especifica" << endl;
        cout << "5. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion; 
        switch (opcion) 
        {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                lista.insertar(valor);
                cout << endl;
                break;
            case 2:
                lista.eliminarInicio();
                cout << endl;
                break;
            case 3:
                lista.eliminarFinal();
                cout << endl;
                break;
            case 4:
                cout << "Ingrese la posición del nodo a eliminar: ";
                cin >> indice;
                lista.eliminarMedio(indice);
                cout << endl;
                break;
            case 5:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    }
}