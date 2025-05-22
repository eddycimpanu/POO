#pragma once
#include "userinterface.h"
#include "produs.h"
#include "pizza.h"
#include "comanda.h"
#include "managercomenzi.h"

class Pizzerie{
    public:
    Pizzerie();
    void run() const;
    private:
    ManagerComenzi manager_comenzi;
    UserInterface user_interface;

};