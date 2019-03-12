//
// Created by Daniel on 07/03/2019.
//

#include "../headers/Collector.h"
#include "../headers/List.h"

Collector::Collector() {
    l = List();
}
List Collector::getList() {
    return l;
}