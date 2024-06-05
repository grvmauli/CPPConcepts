#ifndef ENUMCONCEPT_H_INCLUDED
#define ENUMCONCEPT_H_INCLUDED
/*enums in C++ helps make your code more readable and maintainable by giving meaningful names to sets of integral values.
Scoped enums (enum class) are particularly useful for improving type safety and avoiding conflicts in larger codebases.*/
//Basic Enum
enum colour {
RED,//0
GREEN,//1
BLUE //2
};
//Assigning specific values
enum colou_values {
WHITE=2,
BLACK =4,
YELLOW=6
};

//Enum class (Scoped enum)
enum class class_colour {
BROWN,
GRAY,
PALE
};

//Underlying type of Enum
/*You can specify the underlying type of an enumeration.
By default, it is int, but you can use any integral type*/
enum class type_enum : char {
    BROWN = 'a',
    GRAY = 'b',
    PALE ='c'
};
#endif // ENUMCONCEPT_H_INCLUDED
