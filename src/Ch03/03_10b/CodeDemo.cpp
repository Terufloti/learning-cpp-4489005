// Learning C++ 
// Exercise 03_10
// Using Objects with Vectors, by Eduardo Corpeño 

#include <vector>
#include <iostream>
#include <string>
#include "cow.h"

int main(){
    std::vector<cow> cattle;

    cattle.push_back(cow("Berta", 2, cow_purpose::meat));
    cattle.push_back(cow("Maggie", 8, cow_purpose::hide));
    cattle.push_back(cow("Beg", 3, cow_purpose::pet));
    cattle.push_back(cow("Dur", 5, cow_purpose::dairy));

    std::cout<<"First cow is "<<cattle.begin()->get_name()<<std::endl;
    std::cout<<"At index 1 we have cow "<<cattle.at(1).get_age()<<std::endl;
    std::cout<<"Next to last is " << prev(cattle.end(), 2)->get_name()<<std::endl;
    std::cout<<"Last cow is "<<(cattle.end()-1)->get_name()<<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
