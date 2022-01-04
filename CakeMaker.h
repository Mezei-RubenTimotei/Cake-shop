//
// Created by timo on 12/30/2021.
//

#ifndef CAKE_CAKEMAKER_H
#define CAKE_CAKEMAKER_H
#include "Cake.h"
#include "RecipeCake.h"

class CakeMaker {
public:
    CakeMaker();
    Cake takeCommand(RecipeCake*);
};

#endif //CAKE_CAKEMAKER_H
