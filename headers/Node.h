//
// Created by Daniel on 06/03/2019.
//

#ifndef COLLECTER_NODE_H
#define COLLECTER_NODE_H


#include <cstddef>
#include "Collector.h"

/**
 * @file Node.h
 * @version 1.0
 * @date 03//02//19
 * @author Daniel Garcia Fallas
 * @brief Clase para los nodos
 */

class Node {
private:
    int value = 0;
    Node* next = 0;
    static Collector collector;
public
    Node();
    /**
     * @brief Constructor de la clase Node
     * @param v
     */
    Node(int v);
    /**
     * @return retorna el valor dentro del nodo
     */
    int getValue();
    /**
     *
     * @return retorna el puntero "siguiente"
     *
     */
    Node* getNext();
    /**
     *
     * @param n puntero "siguiente" al cual va a hacer referencia
     *
     */
    void setNext(Node* n);
    void* operator new(size_t size);
    void operator delete(void * p);

};


#endif //COLLECTER_NODE_H
