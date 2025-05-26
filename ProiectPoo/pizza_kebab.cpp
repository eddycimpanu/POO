#include <iostream>
#include "pizza_kebab.h"
using namespace std;

PizzaKebab :: PizzaKebab(){
    denumire="pizza kebab";
    AdaugareIngredient("usturoi",500,1,0.5,1);
    AdaugareIngredient("salata",100,1,1,0.1);
}