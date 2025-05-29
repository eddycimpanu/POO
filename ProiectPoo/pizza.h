#pragma once
#include "produs.h"
class Pizza : public Produs{
    public:
        Pizza();
        static int GetNumarPizze();
        void AdaugareIngredient(const Ingredient& ingredient);
        void AdaugareIngredient(std::string nume);
        void AdaugareIngredient(std::string nume,int cantitate);
        void AdaugareIngredient(std::string nume,int cantitate,bool este_de_post);
        void AdaugareIngredient(std::string nume,int cantitate,bool este_de_post,float pret_per100g,float calorii_per100g);
        void StergereIngredient(std::string nume);
    private:
        static int numar_total_pizze;
        bool _VerificareIngredientDejaInPizza(std::string denumire);

};