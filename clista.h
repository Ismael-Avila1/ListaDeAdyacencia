#ifndef CLISTA_H
#define CLISTA_H

#include "cnodo.h"
#include "citerador.h"

class cLista {
private:
    cNodo inicio;
    cNodo final;

    cIterador itBegin;
    cIterador itEnd;

    cNodo* getNodo(std::string nombreNodo);


public:
    cLista();
    ~cLista();

    void insertarNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion); // La insercion se hace al final de la lista
    void insertarAdyacencia(std::string origen, int d, int v, int s, std::string destino); // Inserta adyacencia en la lista de adyacencias de un nodo. Requeire busqueda

    void eliminarNodo(std::string nombre); // Elimina nodo en la lista de nodos del grafo. Requiere busqueda
    void eliminarAdyacencia(std::string origen, std::string destino);

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir();

    cIterador& begin();
    cIterador& end();
};

#endif // CLISTA_H
