#include "cedgeinfo.h"

cEdgeInfo::cEdgeInfo() {}

cEdgeInfo::cEdgeInfo(int d, int v, int s, std::string a) {
    distancia = d;
    vista = v;
    seguridad = s;
    adyacenteDe = a;
}

void cEdgeInfo::imprimir() {
    std::cout << "\tDistancia: " << distancia << "km" << std::endl;
    std::cout << "\tVista: " << vista << " puntos" << std::endl;
    std::cout << "\tSeguridad: " << seguridad << " puntos" << std::endl;
}
