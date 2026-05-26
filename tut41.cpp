//pointers for derived class
#include <iostream>
using namespace std;

class baseclass{
    public:
    int var_base = 67;
    void print(){
        cout<<"var base is "<<var_base<<endl;
    }

};

class derivedclass : public baseclass{
    public:
    int var_derived = 87;
    void print(){
        cout<<"var derived is "<<var_derived<<endl;
    }
};

int main(){
    baseclass *baseclassptr;
    baseclass objbase;
    derivedclass objderived;
    baseclassptr = &objderived;
    baseclassptr->print();
    
    derivedclass *derivedclassptr;
    derivedclassptr = &objderived;
    derivedclassptr->print();

    return 0;
}