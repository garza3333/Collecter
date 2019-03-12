//
// Created by Daniel on 06/03/2019.
//

#include <cstdlib>
#include "../headers/Node.h"
Node::Node() {
    this->next = 0;
    this->value = 1;
}
Node::Node(int v) : value(v) {
    this->next =0;
    collector = Collector();
}
Node* Node::getNext() {
    return this->next;
}
int Node::getValue() {
    return this->value;
}
void Node::setNext(Node *n) {
    this->next = n;
}
void* Node:: operator new(size_t size) {

         /*void * p =:: new Node();
         return p;*/
//
//    if(!collector.getList().isEmpty()) {
//
//        *collector.getList().getHead()->getValue() = ::new Node(size);
//        collector.getList().getHead() = collector.getList().getHead()->getNext();
//        delete collector.getList().getHead();
//
//
//    }

    //void * p = malloc(size);
    void *p = ::new Node();
/*    if(p != nullptr){
        *static_cast<int*>(p);
    }*/
    return p;

}
void Node::operator delete(void *p){
    collector.getList().add(&p);
    free(p);



}