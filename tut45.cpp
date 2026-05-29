#include <iostream>
using namespace std;

template <class h,class j>
class hm{public:
    h data1;
    j data2;
    hm(h a,j b){
        data1 =a;
        data2=b;
    }
    void display(){
        cout<<data1<<endl<<data2<<endl;
    }
};

int main(){
    hm<int,float> obj(5,9.99);
    obj.display();
    return 0;
}