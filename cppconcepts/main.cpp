#include <iostream>
#include "enumconcept.h"
using namespace std;

int main() {
    colour myColor = BLUE;

    std::cout << "The value of Color::BLUE is: " << myColor << std::endl;

    colou_values mycolourvalues = BLACK;
    cout<<"The value of colour::BLACK is:"<<mycolourvalues<<endl;

    class_colour myclasscolour = class_colour::GRAY;
    if (myclasscolour == class_colour::GRAY){
            cout<<"The value of colour is GRAY"<<endl;
    }
    // Uncommenting the following line would cause a compile-time error
    // std::cout << myclasscolour << std::endl;

    type_enum char_enum = type_enum::BROWN;

    std::cout << "The value of Color::BROWN is: " << static_cast<char>(char_enum) << std::endl;

    return 0;
}
