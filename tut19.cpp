#include <iostream>
using namespace std;

class complex{
    int a; 
    int b;
        public:
        void setdata (int v1 , int v2){
            a=v1;
            b=v2;
        };
        
        friend complex sumcomplex(complex o1 , complex o2);
        
        void displaydata(void){
            cout<<"the complex number can be written as "<<a<<"+i"<<b<<endl;
        };
};

complex sumcomplex(complex o1 , complex o2){
    complex o3;
    o3.setdata((o1.a + o2.a ), (o1.b+ o2.b));
    return o3;
}

int main(){
        complex c1,c2,sum;
        int v1,v2;
        cout<<"enter 2 numbers\n v1 \n v2"<<endl;
        cin>>v1>>v2;
        c1.setdata( v1,  v2);
        c1.displaydata();

        c2.setdata( 9,6);
        c2.displaydata();

        sum = sumcomplex(c1,c2);
        sum.displaydata();
    return 0;
}