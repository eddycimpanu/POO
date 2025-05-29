#pragma once
#include "pizza.h"
#include <vector>

class Comanda {
public:
    ~Comanda();
    Comanda();
    Comanda(const Comanda& comanda);
    void SetPret(int pret);
    int GetPret();
    void ActualizarePret();
    void AfisareDateLivrare() const;
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
    void SetNumeClient(std::string nume);
    void SetTelefonClient(std::string telefon);
    void SetAdresaClient(std::string adresa);
    std::string GetNumeClient() const;
    std::string GetTelefonClient() const;
    std::string GetAdresaClient() const;

private:
    std::vector<Pizza*> pizze;
    int numar_comanda;
    bool platita = false;
    int index_pizza_actuala;
    int pret;
    struct DateLivrare {
        std::string nume_client;
        std::string adresa;
        std::string telefon;
    };
    DateLivrare livrare;
};
