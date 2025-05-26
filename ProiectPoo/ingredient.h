#pragma once
#include <string>

class Ingredient {
public:
    Ingredient(std::string nume);
    Ingredient(std::string nume, float cantitate);
    Ingredient(std::string nume, float cantitate, bool este_de_post);
    Ingredient(std::string nume, float cantitate, bool este_de_post, float pret_per100g,float calorii_per100g);
    std::string AfisareNume() const;
    void SchimbareNume(std::string nume);
    float AfisareCantitate() const;
    void SchimbareCantitate(float cantitate);
    void AdaugareCantitate(float cantitate);
    void ScadereCantitate(float cantitate);
    float AfisarePret() const;
    float AfisareCalorii() const;
    bool AfisareEsteDePost() const;
    void SchimbareEsteDePost(bool este_de_post);
private:
    std::string nume;
    float cantitate; 
    float pret_per100g;
    float calorii_per100g;
    bool este_de_post;
    float pret=0;
    float calorii=0;
    void _ActualizarePret();
    void _ActualizareCalorii();
};