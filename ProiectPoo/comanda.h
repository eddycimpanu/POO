#pragma once
#include "pizza.h"
#include <vector>

class Comanda {
public:
    ~Comanda();
    Comanda();
    Comanda(const Comanda& comanda);
    void SchimbareNumarComanda(int numar_comanda);
    void AfisareNumarComanda() const;
    void AdaugarePizza(Pizza* pizza);
    void AfisarePizzeComanda() const;
    void StergerePizza(int index);
    int NumarPizze();
    void ResetareComanda();
    int AfisareIndexPizzaActuala();
    void SchimbareIndexPizzaActuala();
    void AdaugareNumePizzaPersonalizata(std::string denumire);
    void AfisareCompozitie() const;
    void StergereIngredient(std::string nume);
    void AdaugareMozzarella();
    void AdaugareParmezan();
    void AdaugareGorgonzola();
    void AdaugareRicotta();
    void AdaugareProsciutto();
    void AdaugareSalam();
    void AdaugareSalamPicant();
    void AdaugareBacon();
    void AdaugareTon();
    void AdaugareCiuperci();
    void AdaugareArdei();
    void AdaugareArdeiIute();
    void AdaugareCeapa();
    void AdaugarePorumb();
    void AdaugareSpanac();
    void AdaugareMasline();
    void AdaugareRucola();
    void AdaugareAnanas();
    void AdaugareBusuioc();
    void AdaugareOregano();
    void AdaugareUsturoi();
    void AdaugareChilli();
    void AfisareDetaliiPizza();

private:
    std::vector<Pizza*> pizze;
    int numar_comanda;
    bool platita = false;
    int index_pizza_actuala;
};
