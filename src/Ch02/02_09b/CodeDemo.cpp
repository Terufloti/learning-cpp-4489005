// Learning C++ 
// Exercise 02_09
// Strings, by Eduardo Corpeño 

#include <iostream>
#include <cstring>

int main(){
    const size_t LEN1 = 30;
    char arr_str1[LEN1] = "Good morning!";
    char arr_str2[] = "Whassup?";
    std::string std_str1 = "Good afternoon!";
    std::string std_str2 = "How u today?";

    strncat(arr_str1, arr_str2, LEN1);

    std::cout<< arr_str1 <<std::endl;
    std::cout << std_str1 + std_str2 << std::endl;
    std::cout << std::endl << std::endl;
    return (0);
}
