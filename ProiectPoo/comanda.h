#pragma once
#include "pizza.h"
#include <vector>

class Comanda {
public:
    ~Comanda();
    void SchimbareNumarComanda(int numar_comanda);
    void AfisareNumarComanda() const;
    void AdaugarePizza(Pizza* pizza);
    void AfisarePizzeComanda() const;
    void StergerePizza(int index);
    int NumarPizze();
    void ResetareComanda();

private:
    std::vector<Pizza*> pizze;
    int numar_comanda;
    bool platita = false;
};
