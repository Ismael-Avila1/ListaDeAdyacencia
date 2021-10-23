#ifndef CITERADOR_H
#define CITERADOR_H

#include "cnodo.h"

class cIterador {
private:
    cNodo* pActual;

    void setNodo(cNodo* pNodo);

    friend class cLista;


public:
    cIterador();

    void insertarAdelante(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion);
    void insertarAdyacencia(int d, int v, int s, std::string a);

    void eliminarAdelante();
    void eliminarAdyacencia(std::string nombre);

    // Sobrecarga de operadores
    void operator =(cIterador& otro);

    bool operator ==(cIterador& otro);
    bool operator !=(cIterador& otro);

    void operator ++();
    void operator --();

    void operator ++(int);
    void operator --(int);
};

#endif // CITERADOR_H
