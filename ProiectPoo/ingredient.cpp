#include "ingredient.h"
#include <iostream>
using namespace std;

Ingredient::Ingredient(){
    nume="Necunoscut";
    cantitate=0;
}
Ingredient::Ingredient(string nume){
    this->nume=nume;
    cantitate=0;
}
Ingredient::Ingredient(string nume,int cantitate){
    this->nume=nume;
    this->cantitate=cantitate;
}
void Ingredient::SchimbareCantitate(int cantitate){
    this->cantitate=cantitate;
}
int Ingredient::AfisareCantitate(){
    return cantitate;
}
string Ingredient::AfisareNume() const{
    return nume;
}