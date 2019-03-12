//
// Created by sebas211288 on 11/03/19.
//

#include "../headers/NodeCollector.h"

NodeCollector::NodeCollector() {
    this->next = 0;
    this->value = 0;
}
NodeCollector::NodeCollector(void *v) {
    this->next = 0;
    this->value = v;
}
NodeCollector* NodeCollector::getNext() {
    return this->next;
}

void* NodeCollector::getVal() {
    return this->value;
}

void NodeCollector::setNext(NodeCollector *n) {
    this->next = n;
}