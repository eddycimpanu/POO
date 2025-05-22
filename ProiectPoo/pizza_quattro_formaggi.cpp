#include <iostream>
#include "pizza_quattro_formaggi.h"
using namespace std;

PizzaQuattroFormaggi::PizzaQuattroFormaggi(){
    denumire="pizza quattro formaggi";
    pret=32;
    ingrediente.push_back(Ingredient("branza de burduh",500));
    ingrediente.push_back(Ingredient("salam",50));
}