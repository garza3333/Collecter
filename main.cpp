#include <iostream>
#include "headers/List.h"

using namespace std;
int main() {
    Node * n = new Node(2);
    cout<<n->getValue();
    return 0;
}