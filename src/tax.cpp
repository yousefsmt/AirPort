#include <iostream>
#include "tax.h"

double Tax::calculateTax(double price, double percentage){
    return price*(percentage/100.0);
}