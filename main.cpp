#include <iostream>
#include "Vehicle.h"

int main(){
    Vehicle car1;
    car1.set_year(1999);
    car1.set_make("Honda");
    car1.set_model("Civic Si");

    car1.send_info();

    return 0;
}
