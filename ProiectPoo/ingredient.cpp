#include "ingredient.h"

Ingredient::Ingredient(std::string nume){
    SchimbareNume(nume);
    SchimbareCantitate(100);
    SchimbareEsteDePost(0);
    pret_per100g=5;
    calorii_per100g=20;
    _ActualizareCalorii();
    _ActualizarePret();
}
Ingredient::Ingredient(std::string nume,float cantitate){
    SchimbareNume(nume);
    SchimbareCantitate(cantitate);
    SchimbareEsteDePost(0);
    pret_per100g=5;
    calorii_per100g=20;
    _ActualizareCalorii();
    _ActualizarePret();
}
Ingredient::Ingredient(std::string nume,float cantitate,bool este_de_post){
    this->nume=nume;
    SchimbareCantitate(cantitate);
    SchimbareEsteDePost(este_de_post);
    pret_per100g=5;
    calorii_per100g=20;
    _ActualizareCalorii();
    _ActualizarePret();
}
Ingredient::Ingredient(std::string nume,float cantitate,bool este_de_post,float pret_per100g,float calorii_per100g)
{
    this->nume=nume;
    SchimbareCantitate(cantitate);
    SchimbareEsteDePost(este_de_post);
    this->pret_per100g=pret_per100g;
    this->calorii_per100g=calorii_per100g;
    _ActualizareCalorii();
    _ActualizarePret();
}
std::string Ingredient::AfisareNume() const{
    return nume;
}
void Ingredient::SchimbareNume(std::string nume){
    this->nume=nume;
}

float Ingredient::AfisareCantitate() const{
    return cantitate;
}
void Ingredient::SchimbareCantitate(float cantitate){
    this->cantitate=cantitate;
    _ActualizarePret();
    _ActualizareCalorii();
}
void Ingredient::AdaugareCantitate(float cantitate){
    this->cantitate=this->cantitate+cantitate;
    _ActualizarePret();
    _ActualizareCalorii();
}
void Ingredient::ScadereCantitate(float cantitate){
    this->cantitate -= cantitate;
    if (this->cantitate < 0) this->cantitate = 0;
    _ActualizarePret();
    _ActualizareCalorii();
}

bool Ingredient::AfisareEsteDePost() const{
    return este_de_post;
}
void Ingredient::SchimbareEsteDePost(bool este_de_post){
    this->este_de_post=este_de_post;
}

void Ingredient::_ActualizarePret() {
    pret= (AfisareCantitate() * pret_per100g ) / 100;
}
void Ingredient::_ActualizareCalorii() {
    calorii=(cantitate/100)*calorii_per100g;
}
float Ingredient::AfisarePret() const{
    return pret;
}
float Ingredient::AfisareCalorii() const{
    return calorii;
}