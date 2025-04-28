#include <iostream>
#include "produs.h"
#include "ingredient.h"
#include <vector>
#include <string>

using namespace std;
float produs::AfisarePret(){
    if(pret!=-1)
        return pret;
    else return -1;
}
int produs::AfisareTimpProducere(){
    if(timp_de_producere!=-1)
        return timp_de_producere;
    else return -1;
}
void produs::AfisareIngrediente(){
    cout<<"| ";
    for(int i=0;i<ingrediente.size();i++)
        cout<<ingrediente[i].AfisareNume()<<" | ";
    cout<<'\n';
}
void produs::SchimbarePret(float pret){
    if(pret>=0)
        this->pret=pret;
}
void produs::SchimbareTimpProducere(int timp){
    if(timp>=0)
        timp_de_producere=timp;
}
void produs::AdaugareIngredient(const ingredient& ing){
    ingrediente.push_back(ing);
}
void produs::StergereIngredient(const ingredient& ing){
    for(int i=0;i<ingrediente.size();i++)
        if(ing.AfisareNume() == ingrediente[i].AfisareNume()){
            ingrediente.erase(ingrediente.begin() + i);
            i--;
        }
}