#include <iostream>
#include "pizza_diavola.h"
using namespace std;

PizzaDiavola::PizzaDiavola(){
    denumire="pizza diavola"; 
    AdaugareIngredient("salam picant",200,0,5,30);
    AdaugareIngredient("ardei iute",50,1,3,3);
    AdaugareIngredient("busuioc",30,1,0.3,0.1);
    AdaugareIngredient("parmigiano",30,0,4,5);
}