//
// Created by timo on 12/29/2021.
//

#ifndef CAKE_COMANDPANEL_H
#define CAKE_COMANDPANEL_H
#include <iostream>
#include <list>
#include "Cake.h"
#include "RecipeCake.h"
#include "CommandTaker.h"
using namespace std;

class ComandPanel {
    list<RecipeCake*> menu;
    CommandTaker *commandTaker= new CommandTaker();
public:
    ComandPanel();
    void showProducts();
    void selectProduct(string);
    void selectProduct(string,int);
    void showProductsInCarousel();
};

#endif //CAKE_COMANDPANEL_H
