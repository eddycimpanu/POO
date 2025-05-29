#pragma once
#include <iostream>
#include "comanda.h"
#include "pizza_quattro_stagioni.h"
#include "pizza_quattro_carne.h"
#include "pizza_quattro_formaggi.h"
#include "pizza_diavola.h"
#include "pizza_margherita.h"
#include "pizza_kebab.h"
#include "pizza.h"
#include <vector>
#include <string>

class ManagerComenzi {
public:
    ~ManagerComenzi();
    void AdaugarePizza();
    void AdaugarePizzaQuattroStagioni();
    void AdaugarePizzaQuattroFormaggi();
    void AdaugarePizzaQuattroCarne();
    void AdaugarePizzaKebab();
    void AdaugarePizzaMargherita();
    void AdaugarePizzaDiavola();
    void AdaugareComanda();
    void AfisarePizzeComandaActuala() const;
    int GetNumarPizze() const;
    int GetNumarComenzi() const;
    int GetNumarComenziLivrate() const;
    void IncrementareComenziLivrate();
    void StergerePizzaComandaActuala(int index);
    int NumarComandaActuala() const;
    void ResetareComandaActuala();
    void AfisareComandaActuala();
    void StergereComandaActuala();
    void AfisareComenzi() const;
    void StergereComenzi();
    void ModificareComanda(int index); 
    void ConfirmareModificareComandaActuala();
    void StergereModificariComandaActuala();
    void SchimbareIndexComandaActuala(int index);
    int AfisareNumarComenzi();
    void AdaugarePizzaPersonalizata();
    void AdaugareNumePizzaPersonalizataInComandaActuala(std::string denumire);
    void IntroducereDateComandaActuala(std::string nume,std::string adresa,std::string telefon);
    void SetSumaBaniIncasati(int suma);
    int GetSumaBaniIncasati();
    void LivrareComandaActuala();
    void AfisareCompozitie() const;
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
    void StergereIngredient(std::string nume);
    void AfisareDetaliiPizza();

private:
    std::vector<Comanda*> comenzi;
    int index_comanda_actuala;
    static int numar_total_comenzi;
    int numar_comenzi_livrate=0;
    int suma_bani_incasati=0;
};
