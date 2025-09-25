// Learning C++ 
// Exercise 02_12
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class cow_purpose {dairy, meat, hide, pet};
enum class grocery{canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int meat = 8;
    int a;
    cow_purpose b;
    

    a = (int)cow_purpose::meat;
    b = cow_purpose::pet;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << (int)b << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
