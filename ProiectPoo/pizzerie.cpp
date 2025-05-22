#include "pizzerie.h"

Pizzerie::Pizzerie() : user_interface(&manager_comenzi) {
    
}

void Pizzerie::run() const{
    user_interface.AfisareManagerPizzerie();  
}