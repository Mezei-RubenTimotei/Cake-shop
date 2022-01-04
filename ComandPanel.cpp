//
// Created by timo on 12/29/2021.
//
#include "RecipeCake.h"
#include "ComandPanel.h"
#include <fstream>
#include <string>

using namespace std;

ifstream fin("recipes.txt");

ComandPanel::ComandPanel()
{
    string name;
    int min;
    RecipeCake *recipe;
    while (!fin.eof())
    {
        fin>>name;
        fin>>min;
        recipe= new RecipeCake(name,min);
        menu.push_back(recipe);
    }

}

void ComandPanel::showProducts()
{
    cout<<"-----------------------------------"<<endl;
    cout<<"menu:"<<endl;
    for (auto i=menu.begin();i!=menu.end();i++)
    {
        cout<<"    "<<(*i)->getName()<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}

void ComandPanel::selectProduct(string name)
{
    Cake cake;
    cout<<"-----------------------------------"<<endl;
   if(commandTaker->checkCarouselOfCakes(name)) {
       cake=commandTaker->takeCommand(name);
   }
   else
   {
       for(auto i=menu.begin();i!=menu.end();i++)
       {
           if ((*i)->getName()==name) {
               cake=commandTaker->takeCommand(*i);
               break;
           }
       }
   }
    if (!cake.getName().empty()) {
        cout<<"    Order completed"<<endl;
        cout<<"    You have one "<<cake.getName()<<endl;
    }
    else
        cout<<"sorry but we don't serve "<<name<<endl;
    cout<<"-----------------------------------"<<endl;
    commandTaker->refillCarousel(menu);
}

void ComandPanel::selectProduct(string name,int nr)
{
    cout<<"-----------------------------------"<<endl;
    for(auto i=menu.begin();i!=menu.end();i++)
    {
        if ((*i)->getName()==name) {
            vector<Cake> cakes = commandTaker->takeCommand(*i,nr);
            break;
        }
    }
    cout<<"    Order completed"<<endl;
    cout<<"    You have "<<nr<<" "<<name<<endl;
    cout<<"-----------------------------------"<<endl;
    commandTaker->refillCarousel(menu);
}

void ComandPanel::showProductsInCarousel()
{
    vector<Cake> Cakes=commandTaker->getCakesFromCarousel();
    cout<<"-----------------------------------"<<endl;
    cout<<"We have: "<<endl;
    for(auto i=Cakes.begin();i!=Cakes.end();i++)
    {
        cout<<"    "<<(*i).getName()<<": "<<(*i).getNr()<<endl;
    }
    cout<<"-----------------------------------"<<endl;
}


