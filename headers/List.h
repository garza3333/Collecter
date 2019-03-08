//
// Created by Daniel on 06/03/2019.
//

#ifndef COLLECTER_LIST_H
#define COLLECTER_LIST_H


#include "Node.h"


class List {
private:
    int size;
    Node* head;

public:
    List();
    int getSize();
    bool isEmpty();
    Node* getHead();
    void add(int v);
    void addFirst(int v);
    void delNode(int n);
    bool in(int v);
    void see();
};


#endif //COLLECTER_LIST_H
