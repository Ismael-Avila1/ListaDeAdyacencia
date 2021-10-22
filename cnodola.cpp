#include "cnodola.h"

cNodoLA::cNodoLA() {
    pAnt = nullptr;
    pSig = nullptr;
}

cNodoLA::cNodoLA(int d, int v, int s) {
    pAnt = nullptr;
    pSig = nullptr;

    infoAdyacencia.distancia = d;
    infoAdyacencia.vista = v;
    infoAdyacencia.seguridad = s;
}

void cNodoLA::insertarAdelante(int d, int v, int s) {
    cNodoLA* newNode = new cNodoLA(d, v, s);

    newNode->pSig = this->pSig;
    newNode->pAnt = this;

    this->pSig = newNode;
    this->pSig->pSig->pAnt = newNode;
}

void cNodoLA::eliminarAdelante() {
    this->pSig = this->pSig->pSig;
    delete this->pSig->pAnt;
    this->pSig->pAnt = this;
}
