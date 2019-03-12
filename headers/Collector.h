//
// Created by Daniel on 07/03/2019.
//

#ifndef COLLECTER_COLLECTOR_H
#define COLLECTER_COLLECTOR_H


#include "List.h"
/**
 * @file Collector.h
 * @version 1.0
 * @date 07//03//19
 * @author Daniel Garcia Fallas
 * @brief Clase para reciclar direcciones de memoria
 */
class Collector {

private:
    List l;
public:
    /**
     * Constructor de la clase Collector
     */
    Collector();
    /**
     *
     * @return retorna un puntero que se encientre libre dentro de la lista de collector
     */
    Node* recycle();
    /**
     *
     * @return retorna el atirbuto list de collector
     */
    List getList();

};


#endif //COLLECTER_COLLECTOR_H
