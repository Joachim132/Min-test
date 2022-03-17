//
// Created by Henning Hestnes on 17/03/2022.
//

#include "person.h"

Person::Person(const std::string &name) {
    name_ = name;
}

std::string Person::getName() const {
    return name_;
}