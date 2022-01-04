//
// Created by timo on 12/29/2021.
//

#include "Cake.h"
#include <string>

Cake::Cake(string name)
{
    this->name= name;
}
string Cake::getName() {
    return name;
}

void Cake::IncrementNr(int a) {
    nr+=a;
}

int Cake::getNr() {
    return nr;
}
