#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int , int);
    void printnum(){
        cout <<"the num is "<<a<<"+i"<<b<<endl;
    }
};
    complex ::complex(int x, int y){

        a=x;
        b=y;
    }
int main(){
    complex c1(2,3);
    complex c2 = complex (6,7);
    complex c3(9,0);
    c1.printnum ();
    c2.printnum();
    c3.printnum();

    return 0;
}