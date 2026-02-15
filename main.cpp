#include <iostream>
#include "ListaCircular.h"
using namespace std;

int main() 
{
    ListaCircular lista;
    int valor, indice, opcion = 0;

    while (opcion != 9)
    {
        cout << "Lista actual: " << endl;
        lista.mostrar();
        cout << "   MENU    " << endl;
        cout << "1. Insertar nodo al inicio" << endl;
        cout << "2. Insertar nodo al medio" << endl;
        cout << "3. Insertar nodo al final" << endl;
        cout << "4. Eliminar nodo al inicio" << endl;
        cout << "5. Eliminar nodo al medio" << endl;
        cout << "6. Eliminar nodo al final" << endl;
        cout << "7. Listar (Mostrar)" << endl;
        cout << "8. Ver tamaño de la lista" << endl;
        cout << "9. Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion; 
        
        switch (opcion) 
        {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                lista.insertarInicio(valor);
                break;
            case 2:
                cout << "Ingrese el valor: ";
                cin >> valor;
                cout << "Ingrese la posición: ";
                cin >> indice;
                lista.insertarMedio(valor, indice);
                break;
            case 3:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                lista.insertarFinal(valor);
                break;
            case 4:
                lista.eliminarInicio();
                break;
            case 5:
                cout << "Ingrese la posición del nodo a eliminar: ";
                cin >> indice;
                lista.eliminarMedio(indice);
                break;
            case 6:
                lista.eliminarFinal();
                break;
            case 7:
                cout << "Lista actual: ";
                lista.mostrar();
                break;
            case 8:
                cout << "Tamaño de la lista: " << lista.obtenerTamaño() << endl;
                break;
            case 9:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    }
    return 0;
}