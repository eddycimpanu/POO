#include <iostream>
#include "produs.h"
#include "ingredient.h"
#include "comanda.h"
#include "pizza.h"
#include <vector>
#include <string>

using namespace std;

void Comanda::SchimbareNumarComanda(int numar_comanda){
    this->numar_comanda=numar_comanda;
}
void Comanda::AfisareNumarComanda() const {
    cout << "Numarul comenzii: " << numar_comanda <<'\n';
}

void Comanda::AdaugarePizza(Pizza* pizza) {
    pizze.push_back(pizza);
}

void Comanda::StergerePizza(int index) {
    delete pizze[index];
    pizze.erase(pizze.begin() + index);
}
void Comanda :: AfisarePizzeComanda() const{
    for(int i=0;i<pizze.size();i++)
         cout<<i+1<<". "<<*pizze[i];
}
void Comanda :: ResetareComanda() {
    while(pizze.size()!=0)
        StergerePizza(0);
}
int Comanda::NumarPizze(){
    return pizze.size();
}
Comanda::~Comanda() {
        for (int i=0;i<pizze.size();i++) {
            delete pizze[i];
        }
        pizze.clear();
    }
