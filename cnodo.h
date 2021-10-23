#ifndef CNODO_H
#define CNODO_H

#include "cinfopueblo.h"
#include "clistaadyacencia.h"

class cNodo {
private:
    cNodo* pAnt;
    cNodo* pSig;

    cInfoPueblo infoNodo;
    cListaAdyacencia lstLA;

    cNodo();
    cNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion);

    void insertarAdelante(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion); // Inserta nodo en la lista de nodos del grafo
    void insertarAdyacencia(int d, int v, int s, std::string a); // Inserta adyacencia en su lista de adyacencias

    void eliminarAdelante();    // Elimina nodo en la lista de nodos del grafo
    void eliminarAdyacencia(std::string nombre);  // Elimina adyacencia en su lista de adyacencia

    friend class cIterador;
    friend class cLista;
};

#endif // CNODO_H
