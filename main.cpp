#include <iostream>
#include "headers/List.h"

using namespace std;
int main() {
    List *l = new List();
    l->addFirst(12);
    l->addFirst(33);
    l->addFirst(1);
    l->see();

    return 0;
}