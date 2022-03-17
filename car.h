//
// Created by Joach on 17.03.2022.
//

#ifndef UNTITLED2_CAR_H
#define UNTITLED2_CAR_H
#include <string>

class Car{
private:
    std::string brand;

public:
    void honk();
    Car(std::string x){
        brand = x;
    }
};

#endif //UNTITLED2_CAR_H
