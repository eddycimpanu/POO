#pragma once
#include <iostream>
#include "managercomenzi.h"
#include <cstdlib>

class UserInterface{
    public:
    UserInterface(ManagerComenzi* manager_comenzi);
    void AfisareManagerPizzerie() const;
    private:
    ManagerComenzi* manager_comenzi;
    void _AfisareMeniuDetaliiPizzerie() const;
    void _AfisareMeniuModificareComanda() const;
    void _AfisareComenziMeniuModificareComanda() const;
    void _AfisareMeniuAdaugarePizzaInComanda() const;
    void _AfisareMeniuStergerePizzaDinComanda() const;
    void _AfisareOptiuniPizze() const;
    void _AfisareComenziManagerPizzerie() const;
    void _AfisareMeniuAdaugareComanda() const;
    void _AfisareComenziMeniuAdaugareComanda() const;
    void _AfisareComenzi() const;
    void _AfisareStergereComanda() const;
    void _AdaugarePizzaPersonalizata() const;
    void _AfisareMeniuPersonalizarePizza() const;
    void _AfisareComenziMeniuPersonalizarePizza() const;
    void _AfisareMeniuAdaugareIngredient() const;
    void _AfisareComenziAdaugareIngredient() const;
    void _AfisareMeniuAdaugareIngredientBranzeturi() const;
    void _AfisareMeniuAdaugareIngredientCarnuriSiMezeluri() const;
    void _AfisareMeniuAdaugareIngredientLegumeSiToppinguriVegetale() const;
    void _AfisareMeniuAdaugareIngredientCondimenteSiExtra() const;
    void _AfisareOptiuniAdaugareIngredientBranzeturi() const;
    void _AfisareOptiuniAdaugareIngredientCarnuriSiMezeluri() const;
    void _AfisareOptiuniAdaugareIngredientCondimenteSiExtra() const;
    void _AfisareOptiuniAdaugareIngredientLegumeSiToppinguriVegetale() const;
    void _AfisareMeniuStergereIngredient() const;
    void _AfisareMeniuLivrareComanda() const;

};