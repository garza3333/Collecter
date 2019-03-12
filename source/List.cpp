//
// Created by Daniel on 06/03/2019.
//

#include "../headers/List.h"
#include "../headers/NodeCollector.h"
#include<iostream>
using namespace std;
List::List() {
    size = 0; this->head = 0;this->headC=0;
}

int List::getSize() {
    return size;
}

Node* List::getHead() {
    return this->head;
}

bool List::isEmpty() {
    return this->head==0;

}
void List::add(int v) {
    if(isEmpty()){
        this->head = new Node(v);
    }else{
        Node* temp = this->getHead();
        while(temp->getNext()!=0){
            temp = temp->getNext();
        }
        Node* n = new Node(v);
        temp->setNext(n);
    }
    size++;
}
void List::addFirst(int v) {

    if(isEmpty()){

        this->head = new Node(v);

    }else{
        Node* temp = this->getHead();
        Node* n = new Node(v);
        n->setNext(this->getHead());
        this->head = n;
    }size++;
}
bool List::in(int v) {
    Node* temp = this->getHead();
    while(temp!=0){
        if(temp->getValue() == v){
            return true;
        }
        temp = temp->getNext();

    }return false;
}
void List::delNode(int n) {
    if(!this->isEmpty()){
        Node* temp = this->getHead();

        if(temp->getValue()==n){
            delete head;
            head = temp->getNext();

        }else{
            if(temp->getValue() == n)
                while(temp->getNext()->getValue()!=n){
                    temp  = temp->getNext();
                }
            temp->setNext(temp->getNext()->getNext());
            delete temp->getNext();

        }
        delete temp;

    }


}
void List::see() {

    if(!isEmpty()){
        Node* temp = this->getHead();
        cout<<"[";
        while(temp->getNext() != 0){
            cout<<temp->getValue()<<", ";
            temp = temp->getNext();
        }cout<<temp->getValue()<<"]";
    }else{
        cout<<"[]";
    }
}

void List::addCollectorNode(void * v) {
    if(this->isEmptyC()){
        this->headC = new NodeCollector(v);
    }else{
        NodeCollector* temp = this->getHeadC();
        while(temp->getNext()!=0){
            temp = temp->getNext();
        }
        NodeCollector* n = new NodeCollector(v);
        temp->setNext(n);
    }
    size++;

}
NodeCollector* List::getHeadC() {
    return this->headC;
}
void List::deleteCollectorNode() {
    NodeCollector * temp = this->getHeadC();
    headC = temp->getNext();
    delete headC;
    delete temp;

}
bool List::isEmptyC() {
    return this->getHeadC() == 0;
}

void List::seeC() {
    if(!isEmptyC()){
        NodeCollector* temp = this->getHeadC();
        cout<<"[";
        while(temp->getNext() != 0){
            cout<<temp->getVal()<<", ";
            temp = temp->getNext();
        }cout<<temp->getVal()<<"]";
    }else{
        cout<<"[]";
    }
}