#ifndef CNODOLA_H
#define CNODOLA_H

#include "cedgeinfo.h"
#include "cnodo.h"

class cNodoLA {
private:
    cNodoLA* pAnt;
    cNodoLA* pSig;

    cEdgeInfo infoAdyacencia;

    cNodo* adyacente;


    cNodoLA();
    cNodoLA(int d, int v, int s);

    void insertarAdelante(int d, int v, int s);
    void eliminarAdelante();

    friend class cIteradorLA;
    friend class cListaAdyacencia;
};

#endif // CNODOLA_H
