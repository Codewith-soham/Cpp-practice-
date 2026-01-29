#include<iostream>
using namespace std;

//base class(animal)
class Animal {
    public:
        void eat(){
            cout<< "Animal is eating" <<endl;
        }
};

//derived class
class dog : public Animal{
    public:
        void bark(){
            cout<<"Dog is barking" <<endl;
        }
};

int main(){
    dog d;
    d.eat();
    d.bark();

    return 0;
}