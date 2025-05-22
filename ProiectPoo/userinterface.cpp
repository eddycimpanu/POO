#include <iostream>
#include "userinterface.h"

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
            std::cout<< "personalizata"; 
}

void UserInterface::_AfisareMeniuStergerePizzaDinComanda() const{
    int optiune;
    system("cls");
    std::cout<<"--- Stergere Pizza ---\n";
    manager_comenzi->AfisarePizzeComandaActuala();
    std::cout<<"0. Renunta din a sterge o pizza\n";
    std::cout<<"Alege o optiune: ";
    cin>>optiune;
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
            int ceva[10];
            std::cout<<"Scrie ceva pentru a te intoarce inapoi: ";
            std::cin>>ceva[10];
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
            system("cls");
            manager_comenzi->AfisareComenzi();
            char ceva[10];
            std::cout<<"Scrie ceva pentru a te intoarce inapoi: ";
            std::cin>>ceva[10];
            break;
        case 3:
            std::cout << "Modifica o Comanda";
            break;
        case 4:
            std::cout << "Sterge Comanda";
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