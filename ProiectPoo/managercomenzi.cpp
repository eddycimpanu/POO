#include "managercomenzi.h"
#include "comanda.h"

void ManagerComenzi::AdaugareNumePizzaPersonalizataInComandaActuala(std::string denumire){
    comenzi[index_comanda_actuala]->AdaugareNumePizzaPersonalizata(denumire);
}
void ManagerComenzi::StergereIngredient(std::string nume){
    comenzi[index_comanda_actuala]->StergereIngredient(nume);
}
void ManagerComenzi::AfisareDetaliiPizza(){
    comenzi[index_comanda_actuala]->AfisareDetaliiPizza();
}
void ManagerComenzi::AdaugareMozzarella() {
    comenzi[index_comanda_actuala]->AdaugareMozzarella();
}
void ManagerComenzi::AdaugareParmezan() {
    comenzi[index_comanda_actuala]->AdaugareParmezan();
}
void ManagerComenzi::AdaugareGorgonzola() {
    comenzi[index_comanda_actuala]->AdaugareGorgonzola();
}
void ManagerComenzi::AdaugareRicotta() {
    comenzi[index_comanda_actuala]->AdaugareRicotta();
}
void ManagerComenzi::AdaugareProsciutto() {
    comenzi[index_comanda_actuala]->AdaugareProsciutto();
}
void ManagerComenzi::AdaugareSalam() {
    comenzi[index_comanda_actuala]->AdaugareSalam();
}
void ManagerComenzi::AdaugareSalamPicant() {
    comenzi[index_comanda_actuala]->AdaugareSalamPicant();
}
void ManagerComenzi::AdaugareBacon() {
    comenzi[index_comanda_actuala]->AdaugareBacon();
}
void ManagerComenzi::AdaugareTon() {
    comenzi[index_comanda_actuala]->AdaugareTon();
}
void ManagerComenzi::AdaugareCiuperci() {
    comenzi[index_comanda_actuala]->AdaugareCiuperci();
}
void ManagerComenzi::AdaugareArdei() {
    comenzi[index_comanda_actuala]->AdaugareArdei();
}
void ManagerComenzi::AdaugareArdeiIute() {
    comenzi[index_comanda_actuala]->AdaugareArdeiIute();
}
void ManagerComenzi::AdaugareCeapa() {
    comenzi[index_comanda_actuala]->AdaugareCeapa();
}
void ManagerComenzi::AdaugarePorumb() {
    comenzi[index_comanda_actuala]->AdaugarePorumb();
}
void ManagerComenzi::AdaugareSpanac() {
    comenzi[index_comanda_actuala]->AdaugareSpanac();
}
void ManagerComenzi::AdaugareMasline() {
    comenzi[index_comanda_actuala]->AdaugareMasline();
}
void ManagerComenzi::AdaugareRucola() {
    comenzi[index_comanda_actuala]->AdaugareRucola();
}
void ManagerComenzi::AdaugareAnanas() {
    comenzi[index_comanda_actuala]->AdaugareAnanas();
}
void ManagerComenzi::AdaugareBusuioc() {
    comenzi[index_comanda_actuala]->AdaugareBusuioc();
}
void ManagerComenzi::AdaugareOregano() {
    comenzi[index_comanda_actuala]->AdaugareOregano();
}
void ManagerComenzi::AdaugareUsturoi() {
    comenzi[index_comanda_actuala]->AdaugareUsturoi();
}
void ManagerComenzi::AdaugareChilli() {
    comenzi[index_comanda_actuala]->AdaugareChilli();
}
void ManagerComenzi::AfisareCompozitie() const{
    comenzi[index_comanda_actuala]->AfisareCompozitie();
}
void ManagerComenzi::AdaugarePizzaPersonalizata() {
    Pizza* pizza=new Pizza();
    comenzi[index_comanda_actuala]->AdaugarePizza(pizza);
    comenzi[index_comanda_actuala]->SchimbareIndexPizzaActuala();
}
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
    SchimbareIndexComandaActuala(numar_total_comenzi);
}
void ManagerComenzi::ModificareComanda(int index) {
    SchimbareIndexComandaActuala(index);
    Comanda* copie=new Comanda(*comenzi[index_comanda_actuala]);
    comenzi.push_back(copie);
    numar_total_comenzi++;
    copie->SchimbareNumarComanda(numar_total_comenzi);
}
void ManagerComenzi::ConfirmareModificareComandaActuala() {
    SchimbareIndexComandaActuala(numar_total_comenzi);
    StergereComandaActuala();
}
void ManagerComenzi::StergereModificariComandaActuala() {
    std::swap(comenzi[index_comanda_actuala],comenzi[numar_total_comenzi-1]);
    comenzi[index_comanda_actuala]->SchimbareNumarComanda(index_comanda_actuala+1);
    SchimbareIndexComandaActuala(numar_total_comenzi);
    StergereComandaActuala();
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

    for(int i=0;i<comenzi.size();i++)
        comenzi[i]->SchimbareNumarComanda(i+1);
}
void ManagerComenzi::AfisareComandaActuala() {
        comenzi[index_comanda_actuala]->AfisareNumarComanda();
        comenzi[index_comanda_actuala]->AfisarePizzeComanda();
}
void ManagerComenzi::StergerePizzaComandaActuala(int index){
    if( index <= comenzi[index_comanda_actuala]->NumarPizze() )
        comenzi[index_comanda_actuala]->StergerePizza(index-1);
}
void ManagerComenzi::SchimbareIndexComandaActuala(int index) {
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

int ManagerComenzi::AfisareNumarComenzi(){
    return numar_total_comenzi;
}
int ManagerComenzi::numar_total_comenzi = 0;