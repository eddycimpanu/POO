#include <iostream>
#include <vector>
#include "produs.h"
#include "pizza.h"
#include "ui.h"
#include "ui_meniu.h"
#include "ingredient.h"
#include "pizza_margherita.h"
#include "pizza_diavola.h"
using namespace std;

int main()
{
    pizza_diavola pi;
    pizza_margherita p;
    cout<<pizza::AfisareNumarPizze();
    return 0;
}
