//
// Created by Henning Hestnes on 17/03/2022.
//
#include <string>
#ifndef UNTITLED2_PERSON_H
#define UNTITLED2_PERSON_H


class Person {
public:
Person(const std::string& name);

std::string getName()const;

private:
std::string name_;


};


#endif //UNTITLED2_PERSON_H
