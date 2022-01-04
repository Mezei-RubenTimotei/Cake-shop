//
// Created by timo on 12/29/2021.
//

#ifndef CAKE_CAKE_H
#define CAKE_CAKE_H
#include <iostream>
#include <list>
#include <string>

using namespace std;

class Cake {
    string name;
    int nr=0;
public:
    Cake()
    {
    }
    Cake(string);
    string getName();
    void IncrementNr(int);
    int getNr();
};
#endif //CAKE_CAKE_H
