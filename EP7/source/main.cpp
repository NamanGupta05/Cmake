#include <iostream>
#include "dog.h"
#include "operations.h"
#include "log.h"

int main(){

    auto value = ((10 <=> 20) > 0);
    std::cout<< std::boolalpha;
    std::cout << "Value of comparison: " << value << std::endl;

    double result = add(10.5, 20.5);
    std::cout << "Result of addition: " << result << std::endl;

    Dog dog("Flitzy");
    dog.print_info();
    
    log_data("This is a test message.", LogType::FATAL_ERROR);
    return 0;
}