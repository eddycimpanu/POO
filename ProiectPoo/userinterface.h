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
    void _AfisareMeniuAdaugarePizzaInComanda() const;
    void _AfisareMeniuStergerePizzaDinComanda() const;
    void _AfisareOptiuniPizze() const;
    void _AfisareComenziManagerPizzerie() const;
    void _AfisareMeniuAdaugareComanda() const;
    void _AfisareComenziMeniuAdaugareComanda() const;
};