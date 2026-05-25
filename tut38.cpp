#include <iostream>
using namespace std;
class complex{
    int real, complex;
    public:
    void setdata(){
        cout<<"the real part is : "<<real<<endl;
        cout<<"the complex part is : "<<complex <<endl;
    }
    void getdata(int a, int b){
        real = a;
        complex = b;

    }
};

int main(){
    complex c1;
    //complex *p = &c1;
    complex *p= new complex;
    //(*p).getdata(8,0);
    p->getdata(8,0);
    //(*p).setdata();
    p->setdata();
    
    return 0;
}