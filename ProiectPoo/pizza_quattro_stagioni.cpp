#include <iostream>
#include "pizza_quattro_stagioni.h"
using namespace std;

PizzaQuattroStagioni::PizzaQuattroStagioni(){
    denumire="pizza quattro stagioni";
    pret=35;
    ingrediente.push_back(Ingredient("masline",500));
    ingrediente.push_back(Ingredient("salam",50));
}