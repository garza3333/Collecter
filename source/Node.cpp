//
// Created by Daniel on 06/03/2019.
//

#include "../headers/Node.h"
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
void* Node::operator new(size_t size) {
    if(collector.getList().isEmpty()){
        *collector.getList().getHead()->getValue() =  Node(size);
        delete collector.getList().getHead();

    }

}
void Node::operator delete(void *p){
    collector.getList().add();


}