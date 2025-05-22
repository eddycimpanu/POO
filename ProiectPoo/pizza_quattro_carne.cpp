#include <iostream>
#include "pizza_quattro_carne.h"
using namespace std;

PizzaQuattroCarne::PizzaQuattroCarne(){
    denumire="pizza quattro carne";
    pret=33;
    ingrediente.push_back(Ingredient("sunca",500));
    ingrediente.push_back(Ingredient("salam",50));
}