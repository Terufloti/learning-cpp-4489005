// Learning C++ 
// Exercise 02_08
// Arrays, by Eduardo Corpeño 

#include <iostream>

//#define ELEMENTS 5

int main(){
    const size_t ELEMENTS = 5;
    int whatever[ELEMENTS];
    float temp[] = {15.99, 35.12, 75.2};

    whatever[0] = 12;
    whatever[1] = 43;
    whatever[2] = 29;
    whatever[3] = 67;
    whatever[4] = 2;

    std::cout<<"Whatever array has "<<ELEMENTS<<" elements."<<std::endl;
    for(int i=0;i<ELEMENTS;i++){
        std::cout<<"Whatever["<<i<<"]: "<<whatever[i]<<std::endl;
    }
    
    std::cout << std::endl << std::endl;
    return (0);
}
