#include <iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);
    void printnum(){
        cout <<"the num is "<<a<<"+i"<<b;
    }
};
    complex ::complex(void){
       cout<<"enter the value of\n a\n b"<<endl;
       cin>>a>>b;

    }
int main(){
    complex c;
    c.printnum();

    return 0;
}