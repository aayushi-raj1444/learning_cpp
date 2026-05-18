#include <iostream>
using namespace std;

class complex{
    int a; 
    int b;
        public:
        void setdata(int v1, int v2){
            a=v1;
            b=v2;
        }
        void complexsum(complex x1, complex x2){
            a = x1.a + x2.a;
            b = x1.b + x2.b;
        }
        void displaydata(void){
            cout<<"the complex number can be written as "<<a<<"+i"<<b<<endl;
        };
};

int main(){
        complex c1,c2,c3;
        int v1,v2;
        cout<<"enter 2 numbers\n v1 \n v2"<<endl;
        cin>>v1>>v2;
        c1.setdata( v1,  v2);
        c1.displaydata();

        c2.setdata( 9,6);
        c2.displaydata();

        c3.complexsum(c1,c2);
        c3.displaydata();
    return 0;
}