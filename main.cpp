#include <iostream>
#include "headers/List.h"

using namespace std;
int main() {
    List* l = new List();
    l->add(1);
    l->add(2);
    l->add(3);
    l->addFirst(4);
    l->addFirst(5);
    l->see();


    return 0;
}