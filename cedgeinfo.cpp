#include "cedgeinfo.h"

cEdgeInfo::cEdgeInfo() {}

cEdgeInfo::cEdgeInfo(int d, int v, int s) {
    distancia = d;
    vista = v;
    seguridad = s;
}

void cEdgeInfo::imprimir() {
    std::cout << "\tDistancia: " << distancia << "km" << std::endl;
    std::cout << "\tVista: " << vista << " puntos" << std::endl;
    std::cout << "\tSeguridad: " << seguridad << " puntos" << std::endl;
}
