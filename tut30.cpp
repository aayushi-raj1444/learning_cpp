#include <iostream>
using namespace std;

class base{
    int data1;
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::  setdata(){
 data1 = 9;
   data2 = 8;
}
int base ::  getdata1(){
    return data1;}
int base ::  getdata2(){
    return data2;
}
class derived : public base {
    int data3;
    public:
    void display();
    int process();
};
int derived :: process(){
    int data3 =getdata1() + data2;
    return data3;
}
void derived ::display(){
    cout<<"data1 = "<< getdata1()<<endl;
    cout<<"data2 = "<<getdata2()<<endl;
    cout <<"data3 = "<<process()<<endl;
}

int main(){
    derived d;
    d.setdata();
    d.getdata1();
    d.getdata2();
    d.process();
    d.display();
    return 0;
}