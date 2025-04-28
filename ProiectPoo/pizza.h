#pragma once
#include "produs.h"
class pizza : public produs{
    public:
        pizza();
        void BlatSubtire();
        static int AfisareNumarPizze();
    private:
        bool blat_subtire=false;
        static int numar_total_pizze;
};