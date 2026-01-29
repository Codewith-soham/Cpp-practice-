#include<iostream>
using namespace std;

class Student{
    public:
        //constructor
        Student(){
            cout<<"Contructor is called" <<endl;
        }

        // Destructor
        ~Student(){
            cout<< "Destructor called" <<endl;
        }
};

int main(){
    Student s;
    return 0;
}