#include <iostream>
#include <list>
#include <string>
#include "ComandPanel.h"
#include "CommandTaker.h"
#include "CarouselOfCakes.h"
using namespace std;

int main() {
    int option,number;
    string name;
    ComandPanel *comandPanel=new ComandPanel();
    while(1)
    {
        cout<<"0.Exit"<<endl;
        cout<<"1.Show menu"<<endl;
        cout<<"2.Show carousel cakes"<<endl;
        cout<<"3.Select product"<<endl;
        cout<<"4.Select products"<<endl;
        cout<<"Please select your option: ";
        cin>>option;
        if (!option)
            break;
        switch (option) {
            case 1:
                comandPanel->showProducts();
                break;
            case 2:
                comandPanel->showProductsInCarousel();
                break;
            case 3:
                cout<<"Introduce the name of the product";
                cin>>name;
                comandPanel->selectProduct(name);
                break;
            case 4:
                cout<<"Introduce the name of the product";
                cin>>name;
                cout<<"Introduce the quantity";
                cin>>number;
                comandPanel->selectProduct(name,number);
                break;
            default:
                cout<<"Wrong option, please select again"<<endl;
                break;
        }
    }

    return 0;
}
