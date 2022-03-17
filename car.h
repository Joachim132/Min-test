#ifndef UNTITLED2_CAR_H
#define UNTITLED2_CAR_H
#include <string>

class Car{
private:
    std::string brand_;

public:
    void honk();
    Car(std::string x){
        brand_ = x;
    }
};

#endif //UNTITLED2_CAR_H
