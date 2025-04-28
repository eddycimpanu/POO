#pragma once
#include <string>
#include <iostream>
using namespace std;

class ingredient {
private:
    string nume;
    int cantitate; 
public:
    ingredient();
    ingredient(string nume);
    ingredient(string nume,int cantitate);
    void ScimbareCantitate(int cantitate);
    string AfisareNume() const;
    int AfisareCantitate();
};