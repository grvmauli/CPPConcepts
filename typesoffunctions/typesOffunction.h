#ifndef TYPESOFFUNCTION_H_INCLUDED
#define TYPESOFFUNCTION_H_INCLUDED

//function declaration
int add(int a, int b); //Function for addition

//Function with default arguments
int multiply(int a,int b=2);//Function declaration with default argument

//Inline function defination
inline int subtract(int a, int b){
    return a-b;
}

//Function overloading
double add(double a,double b);

#endif // TYPESOFFUNCTION_H_INCLUDED
