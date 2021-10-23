#include "citerador.h"

cIterador::cIterador() {}

void cIterador::setNodo(cNodo *pNodo) {
    pActual = pNodo;
}

void cIterador::insertarAdelante(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    pActual->insertarAdelante(nombre, estado, magicoDesde, clima, temp, atraccion);
}

void cIterador::insertarAdyacencia(int d, int v, int s, std::string a) {
    pActual->insertarAdyacencia(d, v, s, a);
}

void cIterador::eliminarAdelante() {
    pActual->eliminarAdelante();
}

void cIterador::eliminarAdyacencia(std::string nombre) {
    pActual->eliminarAdyacencia(nombre);
}

void cIterador::operator =(cIterador &otro) {
    pActual = otro.pActual;
}

bool cIterador::operator ==(cIterador &otro) {
    return (pActual == otro.pActual);
}

bool cIterador::operator !=(cIterador &otro) {
    return (pActual != otro.pActual);
}

void cIterador::operator ++() {
    pActual = pActual->pSig;
}

void cIterador::operator --() {
    pActual = pActual->pAnt;
}

void cIterador::operator ++(int) {
    pActual = pActual->pSig;
}

void cIterador::operator --(int) {
    pActual = pActual->pAnt;
}
