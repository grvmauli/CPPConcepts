#ifndef CONTROLOPT_H_INCLUDED
#define CONTROLOPT_H_INCLUDED
#include<iostream>
using namespace std;
//Function to check if number is prime
bool isPrime (int n ){
    if (n<=1)return false;
    if (n==2)return true;
    for(int i = 0;i<n;++i){
        if (n%i==0){
            return false;
        }
    }
    return true;
}

//Function to demonstrate control flow concept
void demonstrateControlFlow(){
//If else
int number = 10;
if(number>0){
    cout<<number<<" is positive"<<endl;
} else if(number<0){
    cout<<number<<" is negative"<<endl;
}else{
    cout<<number<<" is zero"<<endl;
}

//switch case
int day = 3;
switch(day){
case 1:
    cout<<"Monday"<<endl;
    break;
case 2:
    cout<<"Tuesday"<<endl;
    break;
case 3:
    cout<<"Wednesday"<<endl;
    break;
case 4:
    cout<<"Thursday"<<endl;
    break;
case 5:
    cout<<"Friday"<<endl;
    break;
case 6:
    cout<<"Saturday"<<endl;
    break;
case 7:
    cout<<"Sunday"<<endl;
    break;
default:
    cout<<"Invalid day"<<endl;
    break;
}
//For loop
for (int i = 0; i<5; ++i){
    cout<<"For loop iteration: "<<i<<endl;
}

//While Loop
int i =0;
while(i<5){
    cout<<"While loop iteration: "<<i<<endl;
    i++;
}
//Do while
//Difference between while and Do while loop is that
//Do while loop make sure to run condition atleast once
i =0;
do{
    cout<<"Do while loop iteration: "<<i<<endl;
    i++;
}while(i<5);
//Break and continue
for(int i=0;i<10;i++){
    if (i==5){
        break;
    }
    if(i%2==0){
        continue;
    }
    cout<<"Break/Continue loop iteration: "<<i<<endl;
}
}
#endif // CONTROLOPT_H_INCLUDED
