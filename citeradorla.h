#ifndef CITERADORLA_H
#define CITERADORLA_H

#include <cnodola.h>

class cIteradorLA {
private:
    cNodoLA* pActual;

    void setNodo(cNodoLA* pNodo);

    friend class cListaAdyacencia;


public:
    cIteradorLA();

    void insertarAdelante(int d, int v, int s, std::string a);
    void eliminarAdelante();

    // Sobrecarga de operadores
    void operator =(cIteradorLA& otro);

    bool operator ==(cIteradorLA& otro);
    bool operator !=(cIteradorLA& otro);

    void operator ++();
    void operator --();

    void operator ++(int);
    void operator --(int);
};

#endif // CITERADORLA_H
