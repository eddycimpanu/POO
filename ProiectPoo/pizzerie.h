#pragma once
#include "userinterface.h"
#include "managercomenzi.h"

class Pizzerie{
    public:
    Pizzerie();
    void run() const;
    private:
    ManagerComenzi manager_comenzi;
    UserInterface user_interface;
};