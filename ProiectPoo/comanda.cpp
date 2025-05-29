#include <iostream>
#include "produs.h"
#include "ingredient.h"
#include "comanda.h"
#include "pizza.h"
#include <vector>
#include <string>

Comanda::Comanda(){

}
void Comanda::SchimbareNumarComanda(int numar_comanda){
    this->numar_comanda=numar_comanda;
}

Comanda::Comanda(const Comanda& comanda){
    for(int i=0;i<comanda.pizze.size();i++)
        pizze.push_back(new Pizza(*comanda.pizze[i]));
}
void Comanda::SetPret(int pret)
{
    this->pret=pret;
}
int Comanda::GetPret(){
    return pret;
}
void Comanda::ActualizarePret(){
    pret=0;
    for(int i=0;i<pizze.size();i++)
        pret=pret+pizze[i]->AfisarePret();
}
void Comanda::AfisareDateLivrare() const {
    std::cout << "Nume: " << livrare.nume_client << "\n";
    std::cout << "Adresa: " << livrare.adresa << "\n";
    std::cout << "Telefon: " << livrare.telefon << "\n";
}
void Comanda::SetNumeClient(std::string nume){
    livrare.nume_client=nume;
} 
void Comanda::SetAdresaClient(std::string adresa){
    livrare.adresa=adresa;
} 
void Comanda::SetTelefonClient(std::string telefon){
    livrare.telefon=telefon;
} 
std::string Comanda::GetNumeClient() const{
    return livrare.nume_client;
}
std::string Comanda::GetAdresaClient() const{
    return livrare.adresa;
}
std::string Comanda::GetTelefonClient() const{
    return livrare.telefon;
}
void Comanda::AfisareNumarComanda() const {
    std::cout << "Numarul comenzii: " << numar_comanda <<'\n';
}

void Comanda::AdaugarePizza(Pizza* pizza) {
    pizze.push_back(pizza);
}

void Comanda::StergerePizza(int index) {
    delete pizze[index];
    pizze.erase(pizze.begin() + index);
}
void Comanda :: AfisarePizzeComanda() const{
    for(int i=0;i<pizze.size();i++)
         std::cout<<i+1<<". "<<*pizze[i];
}
void Comanda:: SchimbareIndexPizzaActuala(){
    index_pizza_actuala=pizze.size()-1;
}
int Comanda:: AfisareIndexPizzaActuala() {
    return index_pizza_actuala;
}
void Comanda:: AdaugareNumePizzaPersonalizata(std::string denumire) {
    pizze[index_pizza_actuala]->SchimbareDenumire(denumire);
}
void Comanda :: ResetareComanda() {
    while(pizze.size()!=0)
        StergerePizza(0);
}
void Comanda :: StergereIngredient(std::string nume) {
    pizze[index_pizza_actuala]->StergereIngredient(nume);
}
void Comanda :: AfisareDetaliiPizza() {
    std::cout<<"Numele: "<<pizze[index_pizza_actuala]->AfisareDenumire()<<'\n';
    std::cout<<"Pretul: "<<pizze[index_pizza_actuala]->AfisarePret()<<'\n';
    std::cout<<"Calorii: "<<pizze[index_pizza_actuala]->GetCalorii()<<'\n';
    if(pizze[index_pizza_actuala]->AfisareEsteDePost() == 1)
        std::cout<<"Pizza este de post\n";
    else 
        std::cout<<"Pizza nu este de post\n";    
}
void Comanda::AdaugareMozzarella() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Mozzarella", 70, 0, 4, 280);
}
void Comanda::AdaugareParmezan() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Parmezan", 30, 0, 6, 400);
}
void Comanda::AdaugareGorgonzola() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Gorgonzola", 50, 0, 5, 350);
}
void Comanda::AdaugareRicotta() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ricotta", 60, 0, 4, 170);
}
void Comanda::AdaugareProsciutto() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Prosciutto", 60, 0, 6, 250);
}
void Comanda::AdaugareSalam() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Salam", 50, 0, 5, 300);
}
void Comanda::AdaugareSalamPicant() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Salam Picant", 50, 0, 5.5, 320);
}
void Comanda::AdaugareBacon() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Bacon", 50, 0, 5, 400);
}
void Comanda::AdaugareTon() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ton", 60, 0, 7, 200);
}
void Comanda::AdaugareCiuperci() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ciuperci", 60, 1, 2, 25);
}
void Comanda::AdaugareArdei() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ardei", 40, 1, 2, 30);
}
void Comanda::AdaugareArdeiIute() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ardei Iute", 10, 1, 3, 40);
}
void Comanda::AdaugareCeapa() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ceapa", 30, 1, 1.5, 40);
}
void Comanda::AdaugarePorumb() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Porumb", 40, 1, 2.5, 90);
}
void Comanda::AdaugareSpanac() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Spanac", 30, 1, 2, 25);
}
void Comanda::AdaugareMasline() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Masline", 30, 1, 4, 115);
}
void Comanda::AdaugareRucola() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Rucola", 20, 1, 3, 30);
}
void Comanda::AdaugareAnanas() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Ananas", 50, 1, 3, 50);
}
void Comanda::AdaugareBusuioc() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Busuioc", 5, 1, 10, 20);
}
void Comanda::AdaugareOregano() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Oregano", 3, 1, 12, 270);
}
void Comanda::AdaugareUsturoi() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Usturoi", 5, 1, 4, 150);
}
void Comanda::AdaugareChilli() {
    pizze[index_pizza_actuala]->AdaugareIngredient("Chilli", 5, 1, 6, 280);
}
void Comanda :: AfisareCompozitie() const{
    pizze[index_pizza_actuala]->AfisareIngrediente();
}
int Comanda::NumarPizze(){
    return pizze.size();
}
Comanda::~Comanda() {
        for (int i=0;i<pizze.size();i++) {
            delete pizze[i];
        }
        pizze.clear();
    }
