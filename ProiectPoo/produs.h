#pragma once
#include <vector>
#include "ingredient.h"
#include <string>

using namespace std;
class produs{
    public:
        float AfisarePret();
        int AfisareTimpProducere();
        void AfisareIngrediente();
        void SchimbarePret(float pret);
        void SchimbareTimpProducere(int timp);
        void AdaugareIngredient(const ingredient& ing);
        void StergereIngredient(const ingredient& ing);
    protected:
        vector<ingredient> ingrediente;
    private:
        float pret=-1;
        int timp_de_producere=-1;
        bool este_de_post;
};