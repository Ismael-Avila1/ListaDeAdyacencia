#include "clistaadyacencia.h"

cListaAdyacencia::cListaAdyacencia() {
    inicio.pSig = &final;
    final.pAnt = &inicio;
}

cListaAdyacencia::~cListaAdyacencia() {
    cIteradorLA it;

    for (it=begin(); it!=end(); it++) {
        inicio.pSig = inicio.pSig->pSig;
        delete it.pActual;
    }
    final.pAnt = &inicio;
}

void cListaAdyacencia::insertar(int d, int v, int s) {
    final.pAnt->insertarAdelante(d, v, s);
}

//void cListaAdyacencia::eliminar(std::string nombre) {
//    if(isEmpty())
//        return;

//    cIteradorLA it;

//    for(it=begin(); it!=end(); it++)
//        if(it.pActual->adyacente->infoNodo.nombre == nombre)
//            it.pActual->pAnt->eliminarAdelante();
//}

int cListaAdyacencia::size() {
    int contNodes = 0;
    cIteradorLA it;

    for(it=begin(); it!=end(); it++)
        contNodes++;

    return contNodes;
}

bool cListaAdyacencia::isEmpty() {
    return inicio.pSig == &final;
}

bool cListaAdyacencia::isFull() {
    return false;
}

//void cListaAdyacencia::imprimir() {
//    cIteradorLA it;

//    for(it=begin(); it!=end(); it++) {
//        std::cout << "\t\t" << it.pActual->adyacente->infoNodo.nombre << std::endl;
//        std::cout << "\tInformacion de la ruta..." << std::endl;
//        it.pActual->infoAdyacencia.imprimir();
//    }
//}

cIteradorLA &cListaAdyacencia::begin() {
    itBegin.setNodo(inicio.pSig);

    return itBegin;
}

cIteradorLA &cListaAdyacencia::end() {
    itEnd.setNodo(&final);

    return itEnd;
}
