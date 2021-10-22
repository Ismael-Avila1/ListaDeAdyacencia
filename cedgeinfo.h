#ifndef CEDGEINFO_H
#define CEDGEINFO_H

#include <iostream>

class cEdgeInfo {
private:
    int distancia;
    int vista;
    int seguridad;

    cEdgeInfo();
    cEdgeInfo(int d, int v, int s);

    void imprimir();

    friend class cNodoLA;
};

#endif // CEDGEINFO_H
