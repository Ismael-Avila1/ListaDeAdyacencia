#ifndef CEDGEINFO_H
#define CEDGEINFO_H

#include <iostream>

class cEdgeInfo {
private:
    int distancia;
    int vista;
    int seguridad;
    std::string adyacenteDe;

    cEdgeInfo();
    cEdgeInfo(int d, int v, int s, std::string a);

    void imprimir();

    friend class cNodoLA;
    friend class cIteradorLA;
    friend class cListaAdyacencia;
};

#endif // CEDGEINFO_H
