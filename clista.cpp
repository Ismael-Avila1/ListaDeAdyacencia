#include "clista.h"

cLista::cLista() {
    inicio.pSig = &final;
    final.pAnt = &inicio;
}

cLista::~cLista() {
    cIterador it;

    for(it=begin(); it!=end(); it++) {
        inicio.pSig = inicio.pSig->pSig;
        it.pActual->lstLA.~cListaAdyacencia();
        delete it.pActual;
    }
    final.pAnt = &inicio;
}

cNodo *cLista::getNodo(std::string nombreNodo) {
    cNodo* temp = inicio.pSig;

    while (temp != &final) {
        if(temp->infoNodo.nombre == nombreNodo)
            return temp;
        temp = temp->pSig;
    }

    return nullptr;
}

void cLista::insertarNodo(std::string nombre, std::string estado, int magicoDesde, std::string clima, int temp, std::string atraccion) {
    final.pAnt->insertarAdelante(nombre, estado, magicoDesde, clima, temp, atraccion);
}

void cLista::insertarAdyacencia(std::string origen, int d, int v, int s, std::string destino) {
    cNodo* pOrigen = getNodo(origen);
    cNodo* pDestino = getNodo(destino);

    if(pOrigen == nullptr or pDestino == nullptr) {
        std::cout << "Nodos de origen o destino incorrectos" << std::endl;
        return;
    }

    pOrigen->lstLA.insertar(d, v, s, destino);
    pDestino->lstLA.insertar(d, v, s, origen);
}

void cLista::eliminarNodo(std::string nombre) {
    cNodo* pNodo = getNodo(nombre);

    if(pNodo == nullptr) {
        std::cout << "Nodo Incorrecto" << std::endl;
        return;
    }

    cIterador it;

    for(it=begin(); it!= end(); it++)
        it.pActual->eliminarAdyacencia(nombre);

    pNodo->pAnt->eliminarAdelante();
}

void cLista::eliminarAdyacencia(std::string origen, std::string destino) {
    cNodo* pOrigen = getNodo(origen);
    cNodo* pDestino = getNodo(destino);

    if(pOrigen == nullptr or pDestino == nullptr) {
        std::cout << "Nodos de origen o destino incorrectos" << std::endl;
        return;
    }

    pOrigen->lstLA.eliminar(destino);
    pDestino->lstLA.eliminar(origen);
}

int cLista::size() {
    int contNodes = 0;
    cIterador it;

    for(it=begin(); it!=end(); it++)
        contNodes++;

    return contNodes;
}

bool cLista::isEmpty() {
    return inicio.pSig == &final;
}

bool cLista::isFull() {
    return false;
}

void cLista::imprimir() {
    if(isEmpty()) {
        std::cout << std::endl << "Grafo Vacio" << std::endl;
        return;
    }

    cIterador it;
    for(it=begin(); it!=end(); it++) {
        it.pActual->infoNodo.imprimir();

        std::cout << std::endl << "\tDe " << it.pActual->infoNodo.nombre << " puedes ir a..." << std::endl << std::endl;
        it.pActual->lstLA.imprimir();
    }
}

cIterador &cLista::begin() {
    itBegin.setNodo(inicio.pSig);

    return itBegin;
}

cIterador &cLista::end() {
    itEnd.setNodo(&final);

    return itEnd;
}
