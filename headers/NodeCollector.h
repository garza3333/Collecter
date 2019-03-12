//
// Created by sebas211288 on 11/03/19.
//

#ifndef COLLECTER_NODECOLLECTOR_H
#define COLLECTER_NODECOLLECTOR_H


class NodeCollector {
private:
    NodeCollector * next;
    void * value;

public:
    NodeCollector();
    NodeCollector(void* v);
    void * getVal();
    NodeCollector * getNext();
    void setNext(NodeCollector * n);



};


#endif //COLLECTER_NODECOLLECTOR_H
