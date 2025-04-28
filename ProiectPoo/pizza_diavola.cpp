#include <iostream>
#include "pizza_diavola.h"
using namespace std;

pizza_diavola::pizza_diavola(){
    ingrediente.push_back(ingredient("salam picant",500));
    ingrediente.push_back(ingredient("ardei iute",50));
    ingrediente.push_back(ingredient("busuioc",30));
    ingrediente.push_back(ingredient("parmigiano",30));
}