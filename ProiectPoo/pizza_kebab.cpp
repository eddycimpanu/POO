#include <iostream>
#include "pizza_kebab.h"
using namespace std;

PizzaKebab :: PizzaKebab(){
    denumire="pizza kebab";
    pret=30;
    ingrediente.push_back(Ingredient("usturoi",500));
    ingrediente.push_back(Ingredient("salata",50));
}