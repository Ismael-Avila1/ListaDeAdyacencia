#include "cnodo.h"

cNodo::cNodo() {
    pAnt = nullptr;
    pSig = nullptr;
}

cNodo::cNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    pAnt = nullptr;
    pSig = nullptr;

    infoNodo.nombre = nombre;
    infoNodo.estado = estado;
    infoNodo.MagicoDesde = magicoDesde;
    infoNodo.tipoClima = clima;
    infoNodo.tempMedia = temp;
    infoNodo.atraccPrincipal = atraccion;
}

void cNodo::insertarAdelante(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    cNodo* newNode = new cNodo(nombre, estado, magicoDesde, clima, temp, atraccion);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;

    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

void cNodo::insertarAdyacencia(int d, int v, int s, std::string a) {
    this->lstLA.insertar(d, v, s, a);
}

void cNodo::eliminarAdelante() {
    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;
}

void cNodo::eliminarAdyacencia(std::string nombre) {
    this->lstLA.eliminar(nombre);
}
