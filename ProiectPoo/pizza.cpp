#include "pizza.h"
#include "ingredient.h"
#include <iostream>
using namespace std;
int Pizza::AfisareNumarPizze(){
    return numar_total_pizze;
}
Pizza::Pizza() {
    numar_total_pizze++;
    denumire="pizza";
    pret=20;
    ingrediente.push_back(Ingredient("aluat",500));
    ingrediente.push_back(Ingredient("sos de rosii",20));
    ingrediente.push_back(Ingredient("branza",20));
    }
void Pizza::BlatSubtire(){
    blat_subtire=true;
}
int Pizza::numar_total_pizze=0;
