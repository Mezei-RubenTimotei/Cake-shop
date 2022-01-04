//
// Created by timo on 12/30/2021.
//

#include <list>
#include <vector>
#include "CarouselOfCakes.h"
#include "CakeMaker.h"
#include "RecipeCake.h"
#include "CommandTaker.h"

CommandTaker::CommandTaker() {


}

Cake CommandTaker::takeCommand(RecipeCake *recipe) {
    return cakeMaker->takeCommand(recipe);
}

vector<Cake> CommandTaker::takeCommand(RecipeCake* recipe,int nrCakes) {
        vector<Cake> cakes;
        Cake cake;
        for(int i=1;i<=nrCakes;i++)
        {
            cout<<recipe->getName()<<i<<endl;
            cake=cakeMaker->takeCommand(recipe);
            cakes.push_back(cake);
        }
    return cakes;
}

Cake CommandTaker::takeCommand(string nameCake) {
    return carousel->getCake(nameCake);
}

vector<Cake> CommandTaker::getCakesFromCarousel() {
    return carousel->getCakes();
}

bool CommandTaker::checkCarouselOfCakes(string name) {
    vector<Cake> cakes=getCakesFromCarousel();
    for(auto i=cakes.begin();i!=cakes.end();i++)
    {
        if((*i).getName()==name && (*i).getNr()>0)
            return true;
    }
    return false;
}

bool CommandTaker::refillCarousel(list<RecipeCake*> recipes ) {
    if(carousel->getCurrentCapacity() <= 3)
    {
        for (int i=carousel->getCurrentCapacity(); i<12 ; i++) {
            for (auto j = recipes.begin(); j != recipes.end(); j++) {
                Cake cake((*j)->getName());
                carousel->addCake(cake);
            }
        }
        return true;
    }
    return false;
}

