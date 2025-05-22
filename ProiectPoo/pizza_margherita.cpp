#include <iostream>
#include "pizza_margherita.h"
using namespace std;

PizzaMargherita::PizzaMargherita(){
    denumire="pizza margherita";
    pret=30;
    ingrediente.push_back(Ingredient("mozzarella ",500));
    ingrediente.push_back(Ingredient("frunze de busuioc",500));
}