// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 2131;
    bool flag = false;
    char letter = 'a';

    if (a > 2000){
        std::cout<<"a > 2000"<<std::endl;
    } else {
        std::cout<<"a < 2000"<<std::endl;
    }
    if (a % 2) std::cout<<"a is odd";
    else std::cout<<"a is even"<<std::endl;

    std::cout<<"The letter "<<letter<<" is ";
    if(letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u' &&
    letter != 'A' && letter != 'E' && letter != 'I' && letter != 'O' && letter != 'U') std::cout<<" not ";
    std::cout<<"a vowel" <<std::endl;

    if(flag) std::cout<<"Flag is true!"<<std::endl;
    else std::cout<<"Flag is false!"<<std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
