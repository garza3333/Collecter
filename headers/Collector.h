//
// Created by Daniel on 07/03/2019.
//

#ifndef COLLECTER_COLLECTOR_H
#define COLLECTER_COLLECTOR_H


#include "List.h"

class Collector {
private:
    List l;

public:
    Collector();
    Node* recycle();
    List getList();

};


#endif //COLLECTER_COLLECTOR_H
