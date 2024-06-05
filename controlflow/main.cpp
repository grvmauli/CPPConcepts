#include <iostream>
#include "controlopt.h"
using namespace std;

int main()
{
    demonstrateControlFlow();

    //Demonstrating function with return statement
    for(int i=0;i<=20;i++){
        if(isPrime(i)){
            cout<<i<<" is a prime number."<<endl;
        }else{
            cout<<i<<" is not a prime number."<<endl;
        }
    }

    return 0;
}
