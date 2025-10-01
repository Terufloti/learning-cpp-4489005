// Learning C++ 
// Exercise 03_09
// Vectors, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> numbers;

    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    std::cout<<"Vector numbers size = "<<numbers.size()<<std::endl;
    std::cout<<"Vector numbers at index 2 = "<<numbers.at(2)<<std::endl;
    numbers.at(2) = 13;
    std::cout<<"Vector numbers at index 2 = "<<numbers.at(2)<<std::endl;
    

    std::cout << std::endl << std::endl;
    return (0);
}
