#include "managercomenzi.h"
#include "comanda.h"
#include <iostream>
void ManagerComenzi::AdaugarePizzaQuattroStagioni() {
    PizzaQuattroStagioni* pizza=new PizzaQuattroStagioni();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugarePizzaQuattroCarne() {
    PizzaQuattroCarne* pizza=new PizzaQuattroCarne();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugarePizzaQuattroFormaggi() {
    PizzaQuattroFormaggi* pizza=new PizzaQuattroFormaggi();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugarePizzaKebab() {
    PizzaKebab* pizza=new PizzaKebab();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugarePizzaDiavola() {
    PizzaDiavola* pizza=new PizzaDiavola();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugarePizzaMargherita() {
    PizzaMargherita* pizza=new PizzaMargherita();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
}
void ManagerComenzi::AdaugareComanda() {
    Comanda* comanda=new Comanda();
    comenzi.push_back(comanda);
    numar_total_comenzi++;
    comanda->SchimbareNumarComanda(numar_total_comenzi);
    _SchimbareIndexComandaActuala(numar_total_comenzi);
}
void ManagerComenzi::AfisarePizzeComandaActuala() const {
    comenzi[index_comanda_actuala]->AfisarePizzeComanda();
}
void ManagerComenzi::ResetareComandaActuala() {
    comenzi[index_comanda_actuala]->ResetareComanda();
}
void ManagerComenzi::StergereComandaActuala() {
    ResetareComandaActuala();
    delete comenzi[index_comanda_actuala];
    comenzi.erase(comenzi.begin() + index_comanda_actuala);
    numar_total_comenzi--;
}
void ManagerComenzi::AfisareComandaActuala() {
        comenzi[index_comanda_actuala]->AfisareNumarComanda();
        comenzi[index_comanda_actuala]->AfisarePizzeComanda();
}
void ManagerComenzi::StergerePizzaComandaActuala(int index){
    if( index <= comenzi[index_comanda_actuala]->NumarPizze() )
        comenzi[index_comanda_actuala]->StergerePizza(index-1);
}
void ManagerComenzi::_SchimbareIndexComandaActuala(int index) {
    index_comanda_actuala=index-1;
}
int ManagerComenzi::NumarComandaActuala() const{
    return index_comanda_actuala+1;
}
void ManagerComenzi::AfisareComenzi() const {
    for (int i=0;i<comenzi.size();i++) {
        comenzi[i]->AfisareNumarComanda();
        comenzi[i]->AfisarePizzeComanda();
    }
}

void ManagerComenzi::StergereComenzi() {
    for (int i=0;i<comenzi.size();i++) {
        delete comenzi[i];
    }
    comenzi.clear();
}

ManagerComenzi::~ManagerComenzi() {
    StergereComenzi();  
}

int ManagerComenzi::numar_total_comenzi = 0;