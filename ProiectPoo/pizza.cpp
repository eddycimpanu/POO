#include "pizza.h"
#include "ingredient.h"
#include <iostream>
using namespace std;
int pizza::AfisareNumarPizze(){
    return numar_total_pizze;
}
pizza::pizza() {
    numar_total_pizze++;
    ingrediente.push_back(ingredient("aluat",500));
    ingrediente.push_back(ingredient("sos de rosii",20));
    ingrediente.push_back(ingredient("branza",20));
    }
void pizza::BlatSubtire(){
    blat_subtire=true;
}
int pizza::numar_total_pizze=0;
