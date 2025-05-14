// Complete Guide to C++ Programming Foundations
// Challenge 01_09
// Terminal Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

int main(){

    std::string name; //declares the name variable

    std::cout << "Enter your name: " << std::flush; //flush This will make sure to completely send the output to the terminal before waiting for the user input, without also creating a new line.
    std::cin >> name; //this requests the user to input their name with a standard input, extracting the information and storing it in the name variable
    std::cout << "Nice to meet you, " << name << "!" << std::endl; //<< is important so we can concatenate the string and variable together. 

    std::cout << std::endl << std::endl;
    return 0;
}