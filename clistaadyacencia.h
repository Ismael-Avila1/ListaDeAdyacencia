#ifndef CLISTAADYACENCIA_H
#define CLISTAADYACENCIA_H

#include "cnodola.h"
#include "citeradorla.h"

class cListaAdyacencia {
private:
    cNodoLA inicio;
    cNodoLA final;

    cIteradorLA itBegin;
    cIteradorLA itEnd;


public:
    cListaAdyacencia();
    ~cListaAdyacencia();

    void insertar(int d, int v, int s); // la insercion se hace al final de la lista
    void eliminar(std::string nombre); // la eliminacion requiere busqueda

    int size();

    bool isEmpty();
    bool isFull();

    void imprimir();

    cIteradorLA& begin();
    cIteradorLA& end();

};

#endif // CLISTAADYACENCIA_H
