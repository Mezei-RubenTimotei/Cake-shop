//
// Created by timo on 12/29/2021.
//

#ifndef CAKE_RECIPECAKE_H
#define CAKE_RECIPECAKE_H
#include <iostream>
#include <list>
#include <string>
using namespace std;

class RecipeCake {
    string name;
    int time;
public:
    RecipeCake();
    RecipeCake(string,int);
    string getName();
    void getTime();
};
#endif //CAKE_RECIPECAKE_H
