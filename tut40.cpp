#include <iostream>
using namespace std;
class X{
    int a;
    public :
    //void setdata(int a){
    X & setdata(int a){
        this->a=a;
        return *this;
    }
    void print(){
        cout<<"the value of a is "<<a<<endl;
    }
};

int main(){
    X x;
    x.setdata(8).print();
    //x.print();
    return 0;
}