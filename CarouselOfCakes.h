//
// Created by timo on 12/30/2021.
//

#ifndef CAKE_CAROUSELOFCAKES_H
#define CAKE_CAROUSELOFCAKES_H
#include <iostream>
#include <vector>
#include "Cake.h"

using namespace std;

class CarouselOfCakes {
    vector<Cake> Cakes;
    unsigned int maxCapacity=12;
    unsigned int lowLimit=3;
public:
    CarouselOfCakes();
    bool addCake(Cake);
    Cake getCake(string);
    int getCurrentCapacity();
    vector<Cake> getCakes();
};
#endif //CAKE_CAROUSELOFCAKES_H
