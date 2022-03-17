#include <iostream>
#include "Person.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Hei";
    std::cout << "Hei!";
    Person p1 = {"per"};
    Person p2 = {"pål"};
    std::cout << p1.getName();
    std::cout << p2.getName();
    return 0;
}
