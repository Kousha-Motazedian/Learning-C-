// Learning C++ 
// Exercise 01_03
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>
int main() {
    std::string name;

    std::cout << "Hello, What is your name?"<< std::endl;;

    std::cin >> name;

    std::cout << "Hi There " << name << std::endl;
    return 0;

}