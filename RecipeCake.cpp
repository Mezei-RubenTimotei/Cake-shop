//
// Created by timo on 12/29/2021.
//

#include "RecipeCake.h"
#include <iostream>
#include <windows.h>
using namespace std;

RecipeCake::RecipeCake() {

}

RecipeCake::RecipeCake(string name,int time) {
    this->name=name;
    this->time=time;
}

string RecipeCake::getName() {
    return name;
}

void RecipeCake::getTime() {
    int s = time;
    while (s!=0)
    {
        //system("cls");
        cout<<s--<<" ";
        Sleep(1000);
    }
    cout<<endl;
}