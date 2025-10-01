// Learning C++ 
// Exercise 03_06
// Pointers, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){

    int b = 45;
    int *ptr;

    ptr = &b;

    std::cout<<"The content of b is "<<b<<std::endl;
    std::cout<<"ptr is pointing to address "<<ptr<<std::endl;
    std::cout<<"Address of b is " << &b<<std::endl;
    std::cout<<"Where ptr is pointing, we have " << *ptr <<std::endl;
    std::cout<<"Address of ptr is "<<&ptr<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
