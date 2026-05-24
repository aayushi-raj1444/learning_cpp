#include <iostream>
using namespace std;
class base1{
    int data1;
    public:
    base1(int b1){
        data1 = b1;
        cout<<"we are in base1"<<endl;
    }
    void printdata1(){
        cout <<"the data1 is : "<<data1<<endl;
    }
};
class base2{
    int data2;
    public:
    base2(int b2){
        data2 = b2;
        cout<<"we are in base2"<<endl;
    }
    void printdata2(){
        cout <<"the data2 is : "<<data2<<endl;
    }
};
class derived : public base1, public base2{
    int derived1 ,derived2;
    public:
    derived(int x, int y, int z,int w):base1( x),base2 (y){
    derived1 = z;
    derived2 = w;
    cout<<"we are in derived"<<endl;
}
void printdata(){
    cout<<"the derived1 is "<<derived1<<endl;
    cout<<"the derived2 is "<<derived2<<endl;
}
};
int main(){
    derived d(9,8,7,6);
    d.printdata1();
    d.printdata2();
    d.printdata();
    return 0;
}