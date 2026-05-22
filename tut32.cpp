// multiple inheritance
#include <iostream>
using namespace std;

class base1{
    protected:
    int num1;
    public:
    void hehe1(int a){
        num1 =a;
    }
};
class base2{
    protected:
    int num2;
    public:
    void hehe2(int a){
        num2 =a;
    }
};
class derive : public base1, public base2 {
    public:
    void display(){
        cout<<"num1 is "<<num1<<endl;
        cout<<"num2 is "<<num2<<endl;
        cout <<"sum is "<<num1+num2<<endl;
    }
};


int main(){
    
    derive d;
    d.hehe1(8);
    d.hehe2(2);
    d.display();
    return 0;
}