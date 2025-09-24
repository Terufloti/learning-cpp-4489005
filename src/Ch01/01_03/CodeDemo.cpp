// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){
    std::string name;
    std::cout<<"Type your name: ";
    std::cin >> name;

    std::cout<<"Hi "<<name<<"!"<<std::endl;

    
    return (0);
}
