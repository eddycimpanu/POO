#include "pizza.h"
#include "ingredient.h"
#include <iostream>
using namespace std;
int Pizza::AfisareNumarPizze(){
    return numar_total_pizze;
}
Pizza::Pizza() {
    numar_total_pizze++;
    denumire="pizza";
    AdaugareIngredient("Aluat",500,1,1.5,2);
    AdaugareIngredient("Sos de rosii",130,1,2,2);
}
bool Pizza::_VerificareIngredientDejaInPizza(std::string denumire){
    for(int i=0;i<ingrediente.size();i++)
        if(ingrediente[i].AfisareNume()==denumire)
            return 1;
    return 0;
}

void Pizza::AdaugareIngredient(const Ingredient& ingredient) {
    ingrediente.push_back(ingredient);
    ActualizarePret();
    VerificareEsteDePost();
}
void Pizza::AdaugareIngredient(std::string nume) {
    if(_VerificareIngredientDejaInPizza(nume)==0)
    {
    ingrediente.push_back(Ingredient(nume));
    ActualizarePret();
    VerificareEsteDePost();
    }
}
void Pizza::StergereIngredient(std::string nume){
    for(int i=0;i<ingrediente.size();i++)
        if(ingrediente[i].AfisareNume()==nume)
            ingrediente.erase(ingrediente.begin() + i);
}
void Pizza::AdaugareIngredient(std::string nume, int cantitate) {
    if(_VerificareIngredientDejaInPizza(nume)==0)
    {
    ingrediente.push_back(Ingredient(nume, cantitate));
    ActualizarePret();
    VerificareEsteDePost();
    }
}
void Pizza::AdaugareIngredient(std::string nume,int cantitate,bool este_de_post) {
    if(_VerificareIngredientDejaInPizza(nume)==0)
    {
    ingrediente.push_back(Ingredient(nume, cantitate, este_de_post)); 
    ActualizarePret();
    VerificareEsteDePost();
    }
}
void Pizza::AdaugareIngredient(std::string nume,int cantitate,bool este_de_post,float pret_per100g,float calorii_per100g) {
    if(_VerificareIngredientDejaInPizza(nume)==0)
    {
    ingrediente.push_back(Ingredient(nume, cantitate, este_de_post,pret_per100g,calorii_per100g)); 
    ActualizarePret();
    VerificareEsteDePost();
    }
}
int Pizza::numar_total_pizze=0;
