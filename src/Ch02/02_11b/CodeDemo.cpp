// Learning C++ 
// Exercise 02_11
// Type Casting Examples, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int main(){
    int fhrt = 100;
    int cls;

    cls = ((float)5 / 9.0) * (fhrt - 32);

    std::cout<<"Fahrenheit: "<<fhrt<<std::endl;
    std::cout<<"Celsius: "<<cls<<std::endl;    

    double weight = 10.99;

    std::cout << std::endl;
    std::cout<<"Float: "<<weight<<std::endl;
    std::cout<<"Integer part: "<<(int)weight<<std::endl;
    std::cout<<"Fractional part: "<< (int)((weight - (int)weight)*100) <<std::endl;


    std::cout << std::endl << std::endl;
    return (0);
}
