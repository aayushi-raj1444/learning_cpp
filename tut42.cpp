#include<iostream>
using namespace std;
class baseclass{
    public:
    int var_base = 67;
    virtual void print(){
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
    
    baseclass * base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->print();

    derivedclass *derclassptr;
    derclassptr = &obj_derived;
    derclassptr->print();
    return 0;
}
  