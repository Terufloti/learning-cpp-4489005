// Learning C++ 
// Exercise 02_06
// Preprocessor directives, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <cstdint>

#define CAP 975
//#define DEBUG

int main(){
    int32_t small = CAP;
    uint8_t large = 25;

    #ifdef DEBUG
        std::cout<<"[About to perform the addiction]"<<std::endl;
    #endif
    small += large;
    std::cout<<small<<std::endl<<std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
