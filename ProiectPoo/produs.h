#pragma once
#include <vector>
#include "ingredient.h"
#include <string>

class Produs{
    public:
        Produs();
        float AfisarePret() const;
        std::string AfisareDenumire() const;
        int AfisareTimpProducere();
        void AfisareIngrediente();
        void SchimbarePret(float pret);
        void SchimbareTimpProducere(int timp);
        void AdaugareIngredient(const Ingredient& ing);
        void StergereIngredient(const Ingredient& ing);
        bool AfisareEsteDePost();
        virtual void Afisare(std::ostream& out) const;
        friend std::ostream& operator<<(std::ostream& out, const Produs& p);
        virtual ~Produs() = default;
        void SchimbareDenumire(std::string denumire);
        int GetCalorii();
    protected:
        void VerificareEsteDePost();
        std::vector<Ingredient> ingrediente;
        float pret;
        std::string denumire;
        void ActualizarePret();
    private:
        int timp_de_producere=-1;
        bool este_de_post;
        int calorii;
    };