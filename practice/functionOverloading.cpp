#include<iostream>
using namespace std;
class Dog{
    public:
        void sound(){
            cout<<"Dog barks"<<endl;
        }

        void sound(string soundName){
            cout<<"Dog "<< soundName << endl;
        }

        void sound(string soundName , int times){
            cout<<"Dog makes a sound " << soundName << endl << times <<" times" << endl;
        }
};

int main(){
    Dog d;
    d.sound();
    d.sound("barks");
    d.sound("woof" , 3);

    return 0; 
}