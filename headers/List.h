//
// Created by Daniel on 06/03/2019.
//

#ifndef COLLECTER_LIST_H
#define COLLECTER_LIST_H


#include "Node.h"
/**
 * @file List.h
 * @version 1.0
 * @date 03//02//19
 * @author Daniel Garcia Fallas
 * @brief Clase para enlazar un conjunto de nodos
 */

class List {
private:
    int size;
    Node* head;

public:
    /**
     * Constructor de la clase LIst
     */
    List();
    /**
     *
     * @return retorna el largo de la lista
     */
    int getSize();
    /**
     *
     * @return retorna true si la lista está vacía , sino false
     */
    bool isEmpty();
    /**
     *
     * @return el Node Head de la lista enlazada
     */
    Node* getHead();
    /**
     *
     * @param v valor a almacenar al final de la lista
     */
    void add(int v);
    /**
     *
     * @param v valor a almacenar como cabeza de la lista
     */
    void addFirst(int v);
    /**
     *
     * @param n numero a buscar en la list para eliminar
     */
    void delNode(int n);
    /**
     *
     * @param v valor a buscar dentro de la lista
     * @return retorna true si encuentra el valor dentro de la lista
     */
    bool in(int v);
    /**
     * Metodo para imprimir en consola todos los valores que están dentro de la lista
     */
    void see();
};


#endif //COLLECTER_LIST_H
