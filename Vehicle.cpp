//
// Created by Antonio Vargas on 7/22/22.
//
#include <iostream>
#include "Vehicle.h"

void Vehicle::set_make(std::string make) {
    Make = make;
}

void Vehicle::set_model(std::string model) {
    Model = model;
}

void Vehicle::set_year(int year) {
    Year = year;
}

std::string Vehicle::get_make() {
    return Make;
}

std::string Vehicle::get_model() {
    return Model;
}

int Vehicle::get_year() {
    return Year;
}

void Vehicle::send_info() {
    std::cout << "Vehicle Year: \t" << get_year();
    std::cout << "\nVehicle Make: \t" << get_make();
    std::cout << "\nVehicle Model: \t" << get_model();
}