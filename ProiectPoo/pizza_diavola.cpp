#include <iostream>
#include "pizza_diavola.h"
using namespace std;

PizzaDiavola::PizzaDiavola(){
    denumire="pizza diavola"; 
    pret=35;  
    ingrediente.push_back(Ingredient("salam picant",500));
    ingrediente.push_back(Ingredient("ardei iute",50));
    ingrediente.push_back(Ingredient("busuioc",30));
    ingrediente.push_back(Ingredient("parmigiano",30));
}