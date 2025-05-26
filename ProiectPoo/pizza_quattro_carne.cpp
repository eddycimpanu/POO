#include <iostream>
#include "pizza_quattro_carne.h"
using namespace std;

PizzaQuattroCarne::PizzaQuattroCarne(){
    denumire="pizza quattro carne";
    AdaugareIngredient("sunca",100,0,5,30);
    AdaugareIngredient("salam",50,0,4,28);
}