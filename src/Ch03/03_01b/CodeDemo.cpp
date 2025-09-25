// Learning C++ 
// Exercise 03_01
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    std::string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow cow1;
    cow1.age = 7;
    cow1.name = "Jamie";
    cow1.purpose = cow_purpose::pet;

    std::cout<<"Cow specs:"<<std::endl;
    std::cout<<cow1.name <<" is a type-"<<(int)cow1.purpose <<" cow."<<std::endl;
    std::cout<<cow1.name <<" is "<<cow1.age<<" years old."<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
