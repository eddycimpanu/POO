#include "ingredient.h"
#include <iostream>
using namespace std;

ingredient::ingredient(){
    nume="Necunoscut";
    cantitate=0;
}
ingredient::ingredient(string nume){
    this->nume=nume;
    cantitate=0;
}
ingredient::ingredient(string nume,int cantitate){
    this->nume=nume;
    this->cantitate=cantitate;
}
void ingredient::ScimbareCantitate(int cantitate){
    this->cantitate=cantitate;
}
int ingredient::AfisareCantitate(){
    return cantitate;
}
string ingredient::AfisareNume() const{
    return nume;
}