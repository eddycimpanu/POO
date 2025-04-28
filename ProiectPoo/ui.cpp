#include <iostream>
#include "ui.h"
#include "ui_meniu.h"
#include <cstring>
using namespace std;

void AfisareInterfata() {
    int optiune;
    bool ruleaza = true;
    while(ruleaza){
        AfiseazaMeniuPrincipal();
        cin >> optiune;
        switch (optiune) {
            case 1:
                AfiseazaMeniuPizza();
                break;
            case 2:
                cout<<"Adauga o comanda noua";
                int alegere;
                cin>>alegere;
                cout << "Ai ales pizza nr. " << alegere << "!\n";
                break;
            case 3:
                cout<<"Vezi comenzile";
                break;
            case 4:
                cout<<"Modifica o comanda";
                break;
            case 4:
                cout<<"Sterge o comanda";
                break;
            case 6:
                ruleaza=false;
                cout<<"\nMultumim ca ai ales Pizzeria La Weed\n";
                break;
            default:
                cout << "Optiune invalida. Incearca din nou!\n";
                break;
    }
}
}