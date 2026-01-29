/*
    use book reference and magazine constructor 

    book -- title and author display 
    reference -- title author -> book class and subject -> own property 
    magazine -- issue version -> main property and title and author -> book class  
*/

#include <iostream>
using namespace std;

class book {

    string name;
    string author;

    public:
        book(string n, string a){
            name = n;
            author = a;
        };

        virtual void display(){                     //virtual -- for overriding 
            cout << "name -> " << name << endl;  
            cout << "author -> " <<  author << endl ;   
        };
};

class Reference : public book{
    
    public:
        string subject ;
        Reference (string s , string n , string a ) : book (n , a){  //calling base class constructor
            subject = s;
        };

        void display() override{            //overrding from base class
            book :: display();                                     
            cout << "subject -> "  << subject << endl;
        };
};

class Magzine : public book{
    
    public: 
        string issueVersion;
        Magzine(string i , string n , string a) : book (n , a){  //calling base class constructor 
            issueVersion = i;
        }

        void display() override{    //overriding from base class 
            book :: display();
            cout << "issueVersion -> " << issueVersion << endl;
        };
};


int main(){
    //runtime polymorphism 

    book* b1;

    Reference r ("Computer Science " , "Algorithims " , "CLRS");
    b1 = &r ;
    b1 -> display(); 

    cout << endl;
    
    Magzine m ("version 1" , "Algorithims" , "CLRS");
    b1 = &m;
    b1 -> display();

    return 0; 
}