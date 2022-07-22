//
// Created by Antonio Vargas on 7/22/22.
//

#ifndef VEHICLECLASSASSIGNMENT_VEHICLE_H
#define VEHICLECLASSASSIGNMENT_VEHICLE_H
#include <string>

class Vehicle {
private:
    std::string Make;
    std::string Model;
    int Year;
public:
    // created functions for the setters
    void set_make(std::string make);
    void set_model(std::string model);
    void set_year(int year);
    // created methods for the getters
    std::string get_make();
    std::string get_model();
    int get_year();

    // method to send info to console
    void send_info();

};


#endif //VEHICLECLASSASSIGNMENT_VEHICLE_H
