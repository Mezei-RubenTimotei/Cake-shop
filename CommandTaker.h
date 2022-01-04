//
// Created by timo on 12/30/2021.
//

#ifndef CAKE_COMMANDTAKER_H
#define CAKE_COMMANDTAKER_H
#include <iostream>
#include <list>
#include <vector>
#include "CarouselOfCakes.h"
#include "CakeMaker.h"
#include "RecipeCake.h"

class CommandTaker {
    RecipeCake *recipe=new RecipeCake();
    CakeMaker *cakeMaker=new CakeMaker();
    CarouselOfCakes *carousel=new CarouselOfCakes();
public:
    CommandTaker();
    Cake takeCommand(RecipeCake*);
    vector<Cake> takeCommand(RecipeCake*,int);
    Cake takeCommand(string);
    vector<Cake> getCakesFromCarousel();
    bool checkCarouselOfCakes(string);
    bool refillCarousel(list<RecipeCake*> recipes);
};
#endif //CAKE_COMMANDTAKER_H
