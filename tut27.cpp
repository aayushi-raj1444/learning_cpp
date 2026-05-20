#include <iostream>
using namespace std;

class number{
    int a;
    public :
    number(){
        a=0;
    }
    number(int num){
            a=num;
    }

    number(number &obj){
            a=obj.a;
        cout <<"copy constructor called"<<endl;
    }

    void display(){
        cout<<"the number for this object "<<a<<endl;
    }

};

int main(){
    number x,y,z(87);
    x = number(34);
    x.display();
    y.display();
    z.display();

    number z1(z); // Copy constructor invoked
    z1.display();

    number z2 = z; // Copy constructor not called
    z2.display();

    number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y
    return 0;
}