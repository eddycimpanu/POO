#pragma once
#include <string>
#include <iostream>
using namespace std;


class Ingredient {
private:
    string nume;
    int cantitate; 
public:
    Ingredient();
    Ingredient(string nume);
    Ingredient(string nume,int cantitate);
    void SchimbareCantitate(int cantitate);
    string AfisareNume() const;
    int AfisareCantitate();
};