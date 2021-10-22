#include "citeradorla.h"

cIteradorLA::cIteradorLA() {}

void cIteradorLA::setNodo(cNodoLA *pNodo) {
    pActual = pNodo;
}

void cIteradorLA::insertarAdelante(int d, int v, int s, std::string a) {
    pActual->insertarAdelante(d, v, s, a);
}

void cIteradorLA::eliminarAdelante() {
    pActual->eliminarAdelante();
}

void cIteradorLA::operator =(cIteradorLA &otro) {
    pActual = otro.pActual;
}

bool cIteradorLA::operator ==(cIteradorLA &otro) {
    return (pActual == otro.pActual);
}

bool cIteradorLA::operator !=(cIteradorLA &otro) {
    return (pActual != otro.pActual);
}

void cIteradorLA::operator ++() {
    pActual = pActual->pSig;
}

void cIteradorLA::operator --() {
    pActual = pActual->pAnt;
}

void cIteradorLA::operator ++(int) {
    pActual = pActual->pSig;
}

void cIteradorLA::operator --(int) {
    pActual = pActual->pAnt;
}
