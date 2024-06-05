#include <iostream>
#include "typesOffunction.h"
using namespace std;

int main()
{
    int x=5,y=3;

    //function call with arguments
    cout<<"Sum: "<<add(x,y)<<endl;

    //Function call with default argument
    cout<<"Product with default argument: "<<multiply(x)<<endl;

    //Function call with both arguments
    cout<<"Product with both arguments: "<<multiply(x,y)<<endl;

    //Inline function call
    /*The subtract function is defined using the inline keyword,
    which suggests to the compiler to insert the function's body directly
    into the code where the function is called (to improve performance by avoiding function call overhead).*/
    cout<<"Difference: "<<subtract(x,y)<<endl;

    //Function overloading
    double a=5.5,b=3.3;
    cout<<"Sum (Overloaded): "<<add(a,b)<<endl;
    return 0;
}
