#include<iostream>
using namespace std;

class Student{
    private:
        int marks; //hidden data

    public:
        //setter method
        void setMarks(int m){
            marks = m;
        }

        //getter method
        int getMarks(){
            return marks;
        }
    
};

int main(){
    Student s;
    s.setMarks(89);
    cout << s.getMarks();

    return 0;
    

}