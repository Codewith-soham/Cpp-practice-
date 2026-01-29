#include<iostream>
using namespace std;

int main(){
    int a,b;
    int add, sub,mult;

    cout<<"Enter a: ";
    cin>>a;

    cout<<"Enter b: ";
    cin>>b;

    add = a + b;
    sub = a - b;
    mult = a * b;

    cout<<"Addition= " << add <<endl;
    cout<<"Subtraction= " <<sub <<endl;
    cout<<"Multiplication= "<<mult <<endl;

    cout<<"Address of a: " << &a <<endl; //& is used to store address
    cout<<"Address of b: " << &b <<endl;
    cout<<"Address of mult" <<&mult <<endl;

    return 0; 
}