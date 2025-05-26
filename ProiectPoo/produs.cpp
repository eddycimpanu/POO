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
        return pret;
}
void Produs::ActualizarePret(){
    pret=0;
    for(int i=0;i<ingrediente.size();i++)
        pret=pret+ingrediente[i].AfisarePret();
}
void Produs::SchimbareDenumire(std::string denumire){
    this->denumire=denumire;
}
bool Produs::AfisareEsteDePost(){
    return este_de_post;
}
void Produs::VerificareEsteDePost(){
    for(int i=0;i<ingrediente.size();i++)
        if(ingrediente[i].AfisareEsteDePost()==0)
            este_de_post=0;
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
void Produs::SchimbareTimpProducere(int timp){
    if(timp>=0)
        timp_de_producere=timp;
}
void Produs::AdaugareIngredient(const Ingredient& ing){
    ingrediente.push_back(ing);
    ActualizarePret();
}
void Produs::StergereIngredient(const Ingredient& ing){
    for(int i=0;i<ingrediente.size();i++)
        if(ing.AfisareNume() == ingrediente[i].AfisareNume()){
            ingrediente.erase(ingrediente.begin() + i);
            i--;
        }
    ActualizarePret();
}
int Produs::GetCalorii(){
    calorii=0;
    for(int i=0;i<ingrediente.size();i++)
        calorii=calorii+ingrediente[i].AfisareCalorii();
    return calorii;
}
void Produs::Afisare(std::ostream& out) const {
    out <<AfisareDenumire()<<" | Pret: "<<AfisarePret()<<'\n';
}
std::ostream& operator<<(std::ostream& out, const Produs& p) {
    p.Afisare(out);
    return out;
}