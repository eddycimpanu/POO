#include <iostream>
#include "produs.h"
#include "ingredient.h"
#include <vector>
#include <string>

using namespace std;
Produs::Produs(){
    denumire=" produs generic ";
    pret=0;
}
string Produs::AfisareDenumire() const {
    return denumire;
}
float Produs::AfisarePret() const{
    if(pret!=-1)
        return pret;
    else return -1;
}
int Produs::AfisareTimpProducere(){
    if(timp_de_producere!=-1)
        return timp_de_producere;
    else return -1;
}
void Produs::AfisareIngrediente(){
    cout<<"| ";
    for(int i=0;i<ingrediente.size();i++)
        cout<<ingrediente[i].AfisareNume()<<" | ";
    cout<<'\n';
}
void Produs::SchimbarePret(float pret){
    if(pret>=0)
        this->pret=pret;
}
void Produs::SchimbareTimpProducere(int timp){
    if(timp>=0)
        timp_de_producere=timp;
}
void Produs::AdaugareIngredient(const Ingredient& ing){
    ingrediente.push_back(ing);
}
void Produs::StergereIngredient(const Ingredient& ing){
    for(int i=0;i<ingrediente.size();i++)
        if(ing.AfisareNume() == ingrediente[i].AfisareNume()){
            ingrediente.erase(ingrediente.begin() + i);
            i--;
        }
}
void Produs::Afisare(std::ostream& out) const {
    out <<AfisareDenumire()<<" | Pret: "<<AfisarePret()<<'\n';
}
std::ostream& operator<<(std::ostream& out, const Produs& p) {
    p.Afisare(out);
    return out;
}