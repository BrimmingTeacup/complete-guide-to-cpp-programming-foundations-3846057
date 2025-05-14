// Complete Guide to C++ Programming Foundations
// Exercise 02_05
// Using Variables, by Eduardo Corpeño 

#include <iostream>

int a, b = 5; //you can assign multiple variables at the same time, separating with a comma. You can also assign variables globally as shown here, but is commonly preferred to not do this in proper industry practice. 

int main(){
    bool myFlag;//bool will assign a true/false variable that will return 1 or 0 respectively. Assigning any number other than 0 will result in true. 
    a = 7; //once a variable is declared, you can reassign it to other things if you need. Note, once you go up an indentation, say going to the global scale outside of the main function, any variables you reassigned will revert to their original, and any variables you declared will be released from the memory. 
    myFlag = false; 

    std::cout << "a = " << a <<std::endl;
    std::cout << "b = " << b <<std::endl;
    std::cout << "flag = " << myFlag <<std::endl;

    myFlag = true;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    std::cout << "flag = " << myFlag << std::endl;

    unsigned int positive; // setting an unsigned int will return the result as the binary equivalent. So it's important to be careful when using unsigned/signed ints. 

    positive = b - a;
    std::cout << "The int positive = " << positive << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
