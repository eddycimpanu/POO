#pragma once
#include "comanda.h"
#include "pizza_quattro_stagioni.h"
#include "pizza_quattro_carne.h"
#include "pizza_quattro_formaggi.h"
#include "pizza_diavola.h"
#include "pizza_margherita.h"
#include "pizza_kebab.h"
#include <vector>

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
    void StergerePizzaComandaActuala(int index);
    int NumarComandaActuala() const;
    void ResetareComandaActuala();
    void AfisareComandaActuala();
    void StergereComandaActuala();
    void AfisareComenzi() const;
    void StergereComenzi(); 
private:
    std::vector<Comanda*> comenzi;
    int index_comanda_actuala;
    static int numar_total_comenzi;
    void _SchimbareIndexComandaActuala(int index);
};
