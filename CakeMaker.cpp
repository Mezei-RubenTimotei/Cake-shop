//
// Created by timo on 12/30/2021.
//

#include "CakeMaker.h"
#include "RecipeCake.h"
#include "Cake.h"

Cake CakeMaker::takeCommand(RecipeCake *recipe) {
    Cake newCake(recipe->getName());
    recipe->getTime();
    return newCake;
}

CakeMaker::CakeMaker() {

}
