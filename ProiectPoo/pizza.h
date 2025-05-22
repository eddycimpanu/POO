#pragma once
#include "produs.h"
class Pizza : public Produs{
    public:
        Pizza();
        void BlatSubtire();
        static int AfisareNumarPizze();
    private:
        bool blat_subtire=false;
        static int numar_total_pizze;
};