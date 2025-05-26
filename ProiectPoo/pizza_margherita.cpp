#include <iostream>
#include "pizza_margherita.h"
using namespace std;

PizzaMargherita::PizzaMargherita(){
    denumire="pizza margherita";
    AdaugareIngredient("mozzarella ",500,0,3,30);
    AdaugareIngredient("frunze de busuioc",500,1,0.4,0.3);
}