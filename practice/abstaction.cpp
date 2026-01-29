#include<iostream>
using namespace std;

//abstract class
class Shape{
    public:
        virtual void draw() = 0; //here virtual is a function

};

class Circle : public Shape{
    public:
        void draw(){
            cout<< "Drawing Circle" <<endl;
        }
};

int main(){
    Shape* s;     //* is a pointer (here s is pointing to shape) u cannot create a object of abstract class but can create a pointer 
    Circle c;   
    s = &c;;      //here address od c is stored in s 
    s->draw();     //draw function is being called 
    return 0;
}