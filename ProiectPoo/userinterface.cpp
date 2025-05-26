#include <iostream>
#include "userinterface.h"
#include <string>

UserInterface::UserInterface(ManagerComenzi* manager_comenzi) : manager_comenzi(manager_comenzi) {}
void UserInterface::_AfisareOptiuniPizze() const{
    std::cout << "--- Ce pizza doresti sa adaugi? ---\n";
    std::cout << "1. Pizza Quattro Stagioni\n";
    std::cout << "2. Pizza Quattro Formaggi\n";
    std::cout << "3. Pizza Quattro Carne\n";
    std::cout << "4. Pizza Margherita\n";
    std::cout << "5. Pizza Kebab\n";
    std::cout << "6. Pizza Diavola\n";
    std::cout << "7. Pizza Personalizata\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareMeniuAdaugarePizzaInComanda() const{
        system("cls");
        int optiune;
        _AfisareOptiuniPizze();
        std::cin >> optiune;
        if(optiune==1)
            manager_comenzi->AdaugarePizzaQuattroStagioni();
        else if(optiune==2)
            manager_comenzi->AdaugarePizzaQuattroFormaggi();
        else if(optiune==3)
            manager_comenzi->AdaugarePizzaQuattroCarne();
        else if(optiune==4)
            manager_comenzi->AdaugarePizzaMargherita();
        else if(optiune==5)
            manager_comenzi->AdaugarePizzaKebab();
        else if(optiune==6)
            manager_comenzi->AdaugarePizzaDiavola();
        else if(optiune==7)
            _AfisareMeniuPersonalizarePizza();
}
void UserInterface::_AfisareOptiuniAdaugareIngredientBranzeturi() const{
    std::cout << "--- Ce ingredient doresti sa adaugi? ---\n";
    std::cout << "1. Mozzarella\n";
    std::cout << "2. Parmezan\n";
    std::cout << "3. Gorgonzola\n";
    std::cout << "4. Ricotta\n";
    std::cout << "0. Intoarce-te la meniu de editare a pizzei personalizate\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareOptiuniAdaugareIngredientCarnuriSiMezeluri() const{
    std::cout << "--- Ce ingredient doresti sa adaugi? ---\n";
    std::cout << "1. Prosciutto\n";
    std::cout << "2. Salam\n";
    std::cout << "3. Salam picant\n";
    std::cout << "4. Bacon\n";
    std::cout << "5. Pui\n";
    std::cout << "6. Ton\n";
    std::cout << "0. Intoarce-te la meniu de editare a pizzei personalizate\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareOptiuniAdaugareIngredientLegumeSiToppinguriVegetale() const{
    std::cout << "--- Ce ingredient doresti sa adaugi? ---\n";
    std::cout << "1. Ciuperci\n";
    std::cout << "2. Ardei\n";
    std::cout << "3. Ardei iute\n";
    std::cout << "4. Ceapa\n";
    std::cout << "5. Porumb\n";
    std::cout << "6. Spanac\n";
    std::cout << "7. Masline\n";
    std::cout << "8. Rucola\n";
    std::cout << "9. Ananas\n";
    std::cout << "0. Intoarce-te la meniu de editare a pizzei personalizate\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareOptiuniAdaugareIngredientCondimenteSiExtra() const{
    std::cout << "--- Ce ingredient doresti sa adaugi? ---\n";
    std::cout << "1. Busuioc\n";
    std::cout << "2. Oregano\n";
    std::cout << "3. Usturoi\n";
    std::cout << "4. Chilli\n";
    std::cout << "0. Intoarce-te la meniu de editare a pizzei personalizate\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareMeniuAdaugareIngredientBranzeturi() const{
    int optiune;
    do {
        system("cls");
        _AfisareOptiuniAdaugareIngredientBranzeturi();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            manager_comenzi->AdaugareMozzarella();
            break;
        case 2:
            manager_comenzi->AdaugareParmezan();
            break;
        case 3:
            manager_comenzi->AdaugareGorgonzola(); 
            break;
        case 4:
            manager_comenzi->AdaugareRicotta(); 
            break;
        case 0:
            break;
        }
    } while (optiune != 0);
}
void UserInterface::_AfisareMeniuAdaugareIngredientCarnuriSiMezeluri() const{
    int optiune;
    do {
        system("cls");
        _AfisareOptiuniAdaugareIngredientCarnuriSiMezeluri();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            manager_comenzi->AdaugareProsciutto();
            break;
        case 2:
            manager_comenzi->AdaugareSalam(); 
            break;
        case 3:
            manager_comenzi->AdaugareSalamPicant(); 
            break;
        case 4:
            manager_comenzi->AdaugareBacon();
            break;
        case 5:
            manager_comenzi->AdaugareTon();
            break;
        case 0:
            break;
        }
    } while (optiune != 0);
}
void UserInterface::_AfisareMeniuAdaugareIngredientLegumeSiToppinguriVegetale() const{
    int optiune;
    do {
        system("cls");
        _AfisareOptiuniAdaugareIngredientLegumeSiToppinguriVegetale();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            manager_comenzi->AdaugareCiuperci();
            break;
        case 2:
            manager_comenzi->AdaugareArdei();
            break;
        case 3:
            manager_comenzi->AdaugareArdeiIute();
            break;
        case 4:
            manager_comenzi->AdaugareCeapa();
            break;
        case 5:
            manager_comenzi->AdaugarePorumb();
            break;
        case 6:
            manager_comenzi->AdaugareSpanac();
            break;
        case 7:
            manager_comenzi->AdaugareMasline();
            break;
        case 8:
            manager_comenzi->AdaugareRucola();
            break;
        case 9:
            manager_comenzi->AdaugareAnanas();
            break;
        case 0:
            break;
        }
    } while (optiune != 0);
}
void UserInterface::_AfisareMeniuAdaugareIngredientCondimenteSiExtra() const{
    int optiune;
    do {
        system("cls");
        _AfisareOptiuniAdaugareIngredientCondimenteSiExtra();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            manager_comenzi->AdaugareBusuioc();
            break;
        case 2:
            manager_comenzi->AdaugareOregano();
            break;
        case 3:
            manager_comenzi->AdaugareUsturoi();
            break;
        case 4:
            manager_comenzi->AdaugareChilli();
            break;
        case 0:
            break;
        }
    } while (optiune != 0);
}
void UserInterface::_AfisareComenziAdaugareIngredient() const{
    std::cout << "--- Alege categoria ingredientului pe care vrei sa il adaugi ---\n";
    std::cout << "1. Branzeturi\n";
    std::cout << "2. Carnuri si mezeluri\n";
    std::cout << "3. Legume si toppinguri vegetale\n";
    std::cout << "4. Condimente si extra-uri\n";
    std::cout << "0. Intoarce-te la meniu de editare a pizzei personalizate\n";
    std::cout << "Alege o optiune: ";
}

void UserInterface::_AfisareMeniuAdaugareIngredient() const{
    system("cls");
    int optiune;
    do {
        system("cls");
        _AfisareComenziAdaugareIngredient();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            _AfisareMeniuAdaugareIngredientBranzeturi();
            break;
        case 2:
            _AfisareMeniuAdaugareIngredientCarnuriSiMezeluri();
            break;
        case 3:
            _AfisareMeniuAdaugareIngredientLegumeSiToppinguriVegetale();
            break;
        case 4:
            _AfisareMeniuAdaugareIngredientCondimenteSiExtra();
            break;
        case 0:
            break;
        }
    } while (optiune != 0);
    
}
void UserInterface::_AfisareComenziMeniuPersonalizarePizza() const{
    std::cout << "--- Pizza Personalizata ---\n";
    std::cout << "1. Alegere numele pizzei\n";
    std::cout << "2. Adaugare ingredient\n";
    std::cout << "3. Stergere ingredient\n";
    std::cout << "4. Vezi compozitia actuala\n";
    std::cout << "5. Detalii despre pizza\n";
    std::cout << "6. Adaugare pizza personalizata\n";
    std::cout << "Alege o optiune: ";
}

void UserInterface::_AfisareMeniuStergereIngredient() const{
    system("cls");
    manager_comenzi->AfisareCompozitie();
    std::string nume;
    std::cout << "Scrie aici numele ingredientului pe care vrei sa il stergi: ";
    std::cin>>nume;
    manager_comenzi->StergereIngredient(nume);
}
void UserInterface::_AfisareMeniuPersonalizarePizza() const
{
    manager_comenzi->AdaugarePizzaPersonalizata();
    int optiune;
    do {
        system("cls");
        _AfisareComenziMeniuPersonalizarePizza();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
        {
            system("cls");
            std::string denumire;
            std::cout<<"Scrie numele pizzei: ";
            std::cin>>denumire;
            manager_comenzi->AdaugareNumePizzaPersonalizataInComandaActuala(denumire);
            break;
        }
        case 2:
            _AfisareMeniuAdaugareIngredient();
            break;
        case 3:
            _AfisareMeniuStergereIngredient();
            break;
        case 4:
        {
            system("cls");
            manager_comenzi->AfisareCompozitie();
            int ceva;
            std::cout<<"Scrie un numar pentru a te intoarce inapoi: ";
            std::cin>>ceva;
            break;
        }
        case 5:
        {
            system("cls");
            manager_comenzi->AfisareDetaliiPizza();
            int ceva;
            std::cout<<"Scrie un numar pentru a te intoarce inapoi: ";
            std::cin>>ceva;
            break;
        }
        case 6:
            break;
        }
    } while (optiune != 6);
}
void UserInterface::_AfisareMeniuStergerePizzaDinComanda() const{
    int optiune;
    system("cls");
    std::cout<<"--- Stergere Pizza ---\n";
    manager_comenzi->AfisarePizzeComandaActuala();
    std::cout<<"0. Renunta din a sterge o pizza\n";
    std::cout<<"Alege o optiune: ";
    std::cin>>optiune;
    if(optiune != 0)
    manager_comenzi->StergerePizzaComandaActuala(optiune);
}

void UserInterface::_AfisareComenziMeniuAdaugareComanda() const{
    std::cout << "--- Comanda numarul: "<< manager_comenzi->NumarComandaActuala() << " ---\n";
    std::cout << "1. Adauga o pizza\n";
    std::cout << "2. Sterge o pizza\n";
    std::cout << "3. Reseteaza comanda\n";
    std::cout << "4. Vezi comanda\n";
    std::cout << "5. Confirma adaugarea comenzii\n";
    std::cout << "0. Anuleaza adaugarea comenzii\n";
    std::cout << "Alege o optiune: ";
}

void UserInterface::_AfisareMeniuAdaugareComanda() const{
    int optiune;
    manager_comenzi->AdaugareComanda();
    do {
        system("cls");
        _AfisareComenziMeniuAdaugareComanda();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            _AfisareMeniuAdaugarePizzaInComanda();
            break;
        case 2:
            _AfisareMeniuStergerePizzaDinComanda();
            break;
        case 3:
            manager_comenzi->ResetareComandaActuala();
            break;
        case 4:
            system("cls");
            manager_comenzi->AfisareComandaActuala();
            int ceva;
            std::cout<<"Scrie un numar pentru a te intoarce inapoi: ";
            std::cin>>ceva;
            break;
        case 5:
            optiune=0;
            break;
        case 0:
            manager_comenzi->StergereComandaActuala();
            break;
        }
    } while (optiune != 0);
}
void UserInterface::_AfisareComenziMeniuModificareComanda() const{
    std::cout << "--- Comanda numarul: "<< manager_comenzi->NumarComandaActuala() << " ---\n";
    std::cout << "1. Adauga o pizza\n";
    std::cout << "2. Sterge o pizza\n";
    std::cout << "3. Reseteaza comanda\n";
    std::cout << "4. Vezi comanda\n";
    std::cout << "5. Confirma modificarea comenzii\n";
    std::cout << "0. Anuleaza modificarea comenzii\n";
    std::cout << "Alege o optiune: ";
}

void UserInterface::_AfisareMeniuModificareComanda() const{
    system("cls");
    manager_comenzi->AfisareComenzi();
    int numar_comanda;
    int optiune;
    std::cout<<"Scrie numarul comenzii pe care vrei sa o modifici: ";
    std::cin>>numar_comanda;
    while(numar_comanda > manager_comenzi->AfisareNumarComenzi())
    {
    system("cls");
    manager_comenzi->AfisareComenzi();
    std::cout<<"Te rog sa scrii un numar valid pentru a modifica o comanda: ";
    std::cin>>numar_comanda;    
    }
    manager_comenzi->ModificareComanda(numar_comanda);
    do {
        system("cls");
        _AfisareComenziMeniuModificareComanda();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            _AfisareMeniuAdaugarePizzaInComanda();
            break;
        case 2:
            _AfisareMeniuStergerePizzaDinComanda();
            break;
        case 3:
            manager_comenzi->ResetareComandaActuala();
            break;
        case 4:
            system("cls");
            manager_comenzi->AfisareComandaActuala();
            int ceva;
            std::cout<<"Scrie un numar pentru a te intoarce inapoi: ";
            std::cin>>ceva;
            break;
        case 5:
            manager_comenzi->ConfirmareModificareComandaActuala();
            optiune=0;
            break;
        case 0:
            manager_comenzi->StergereModificariComandaActuala();
            break;
        }
    } while (optiune != 0);
}

void UserInterface::_AfisareComenziManagerPizzerie() const{
    std::cout << "--- Manager Pizzerie ---\n";
    std::cout << "1. Adauga o comanda\n";
    std::cout << "2. Vizualizare comenzi\n";
    std::cout << "3. Modifica o comanda\n";
    std::cout << "4. Sterge o comanda\n";
    std::cout << "5. Finalizeaza o comanda\n";
    std::cout << "0. Iesire\n";
    std::cout << "Alege o optiune: ";
}
void UserInterface::_AfisareComenzi() const{
    system("cls");
    manager_comenzi->AfisareComenzi();
    int ceva;
    std::cout<<"Scrie un numar pentru a te intoarce inapoi: ";
    std::cin>>ceva;
}

void UserInterface::_AfisareStergereComanda() const{
    system("cls");
    int numar_comanda;
    manager_comenzi->AfisareComenzi();
    std::cout<<"Scrie numarul comenzii pe care vrei sa o stergi: ";
    std::cin>>numar_comanda;
    manager_comenzi->SchimbareIndexComandaActuala(numar_comanda);
    manager_comenzi->StergereComandaActuala();
}

void UserInterface::AfisareManagerPizzerie() const{
    int optiune;
    do {
        system("cls");
        _AfisareComenziManagerPizzerie();
        std::cin >> optiune;
    switch(optiune) {
        case 1:
            _AfisareMeniuAdaugareComanda();
            break;
        case 2:
            _AfisareComenzi();
            break;
        case 3:
            _AfisareMeniuModificareComanda();
            break;
        case 4:
            _AfisareStergereComanda();
            break;
        case 5:
            std::cout << "Finalizare Comanda";
            break;
        case 0:
            system("cls");
            std::cout << "Iesire din aplicatie.\n";
            break;
        default:
            std::cout << "Optiune invalida!\n";
        }

    } while (optiune != 0);
}