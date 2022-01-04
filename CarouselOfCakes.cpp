//
// Created by timo on 12/30/2021.
//

#include "CarouselOfCakes.h"
#include <iostream>
#include <vector>
#include <iterator>
#include "Cake.h"

CarouselOfCakes::CarouselOfCakes() {

}

bool CarouselOfCakes::addCake(Cake cake) {
    bool exist=true;
    if(getCurrentCapacity()<maxCapacity) {
        for (auto i=Cakes.begin();i!=Cakes.end();i++)
            if((*i).getName()==cake.getName())
                (*i).IncrementNr(1), exist= false;

        if (exist) {
            cake.IncrementNr(1);
            Cakes.push_back(cake);
        }
        return true;
    }
    else
        return false;
}

Cake CarouselOfCakes::getCake(string name) {
    Cake copy;
    for (auto i=Cakes.begin();i!=Cakes.end();i++)
    {
        if((*i).getName()==name)
        {
            (*i).IncrementNr(-1);
            return *i;
        }
    }
}

int CarouselOfCakes::getCurrentCapacity() {
    int sum=0;
    if (Cakes.empty())
        return 0;
    for (auto i=Cakes.begin();i!=Cakes.end();i++)
    {
        sum+=(*i).getNr();
    }
    return sum;
}

vector<Cake> CarouselOfCakes::getCakes() {
    return Cakes;
}